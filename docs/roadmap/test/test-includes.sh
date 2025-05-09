#!/bin/bash

M4_FILE="roadmap.m4"  # your M4 file
GRAMMAR_DIR="grammar"
FAILED=0

# Find all .dot files under grammar/
for file in "$GRAMMAR_DIR"/*.dot; do
  basename=$(basename "$file")
  if ! grep -q "include(.*$basename)" "$M4_FILE"; then
    echo "Missing include for $basename"
    FAILED=1
  fi
done
if [ "$FAILED" -eq 0 ]; then
  echo "✅ All grammar dotfiles are included."
else
  echo "❌ Missing includes detected."
  exit 1
fi
