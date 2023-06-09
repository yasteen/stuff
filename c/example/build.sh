#!/bin/bash

cp ../Makefile .
echo "[CLEAN]"
make clean
echo "[BUILD]"
make
echo "[DONE]"

