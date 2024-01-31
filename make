#!/bin/bash

../remove_files build/install_manifest.txt
cmake -B build
cmake --build build - j 12
sudo cmake --install build
sudo ldconfig

