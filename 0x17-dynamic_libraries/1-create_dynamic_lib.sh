#!/bin/bash
gcc -Wall -Werror -c -fpic *.c
gcc -shared -o liball.so *.o
