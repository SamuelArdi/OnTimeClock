#!/bin/bash

if [[ ! -d "build" ]]; then
  mkdir build
fi

cd build
cmake ..
cmake --build .

if [[ $1 == "install" ]]; then
  sudo cmake --install .
fi