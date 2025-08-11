let
  pkgs = import <nixpkgs> {};
in
pkgs.mkShell {
  packages = with pkgs; [
    catch2_3
    cmake
    fmt
    gcc15
    gsl-lite
    ninja
    python313
    python313Packages.setuptools
  ];
}
