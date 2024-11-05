package tree_sitter_TSQL_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-TSQL"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_TSQL.Language())
	if language == nil {
		t.Errorf("Error loading Tsql grammar")
	}
}
