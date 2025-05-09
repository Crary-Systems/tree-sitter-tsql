#!/bin/bash

GRAMMAR_DIR="grammar"
FAILED=0

# 1. All defined .dot filenames (without extension)
defined_files=$(find "$GRAMMAR_DIR" -name '*.dot' -exec basename {} .dot \; | sort)

# 2. Extract RHS nodes (targets of "->")
echo "🔍 Checking for referenced nodes without .dot files..."
used_nodes=$(find "$GRAMMAR_DIR" -name '*.dot' -exec grep '\->' {} + | \
             sed -E 's/.*-> *([a-zA-Z0-9_]+).*/\1/' | \
             sort -u)

# 3. Check for missing dotfiles for RHS nodes
for node in $used_nodes; do
  if ! grep -qx "$node" <<< "$defined_files"; then
    echo "❌ No dotfile found for referenced node: $node"
    FAILED=1
  fi
done

echo ""
echo "🔍 Checking that first listed node matches filename..."

# 4. For each .dot file, check first node matches filename
while IFS= read -r filepath; do
  filename=$(basename "$filepath" .dot)
  # Ensure file starts with digraph {
  if ! grep -q '^\s*digraph\s*{' "$filepath"; then
    echo "❌ $filepath is missing 'digraph {' declaration"
    FAILED=1
    continue
  fi

  # Extract first non-empty, non-brace line after 'digraph {'
  first_node=$(awk '
    /^\s*digraph\s*{/ { in_body=1; next }
    in_body && NF && $0 !~ /^[{}]/ { print $1; exit }
  ' "$filepath")
  if [ "$first_node" != "$filename" ]; then
    echo "❌ $filepath starts with node '$first_node' but expected '$filename'"
    FAILED=1
  fi
done < <(find "$GRAMMAR_DIR" -name '*.dot' | sort)
echo ""
if [ "$FAILED" -eq 0 ]; then
  echo "✅ All referenced nodes and file contents are valid."
else
  echo "✴️  One or more issues found. Please fix and rerun."
  exit 1
fi
