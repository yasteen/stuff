#!/bin/bash

cp ../Makefile .
echo "[CLEAN]"
make clean
echo "[BUILD]"
make
rm -f ./Makefile
echo "[DONE]"

