#!/bin/bash
gcc -c -fPIC *.c
gcc *.c -shared -o liball.so