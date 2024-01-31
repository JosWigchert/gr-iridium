#!/bin/bash

build -B build
build --build build - j 12
sudo build --install build
sudo ldconfig

