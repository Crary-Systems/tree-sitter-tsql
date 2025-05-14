# tree-sitter-tsql

T-SQL grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).
Adapted from [this T-SQL grammar](https://github.com/antlr/grammars-v4/tree/master/sql/tsql).

## Developing

```
nix-shell
tree-sitter generate
tree-sitter build
tree-sitter test
```

## Errata

- Configuration Functions must be all caps or will be parsed as a LOCAL_ID. Lexer issue.
