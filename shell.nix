let
  nixpkgsPin = {
    url = https://github.com/NixOS/nixpkgs/archive/babc25a577c3310cce57c72d5bed70f4c3c3843a.tar.gz;
  };
  pkgs = import (builtins.fetchTarball nixpkgsPin) {};
in

pkgs.stdenv.mkDerivation rec {
  name = "tree-sitter-tsql";
  src = ./.;

  buildInputs = with pkgs; [
    nodejs
    tree-sitter
  ];

  shellHook = ''
    export PATH="./node_modules/.bin:$PATH"
  '';
}
