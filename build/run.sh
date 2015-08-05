#!/bin/bash
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:../lib/build
./prog

valgrind --leak-check=full
.prog
