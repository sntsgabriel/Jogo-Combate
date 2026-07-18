#!/usr/bin/env bash
set -e

# Configura, compila e executa o jogo usando o CMake.
cmake -S . -B build
cmake --build build
./build/JogoCombate
