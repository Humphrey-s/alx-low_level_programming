#!/bin/bash

gcc math.c -c -fPIC;
gcc *.o -shared -o 100-operations.so;
export LD_LIBRARY_PATH=$PWD:LD_LIBRARY_PATH;
