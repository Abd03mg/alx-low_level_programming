#!/bin/sh
gcc -Wall -c -fpic *.c
gcc -shared *.o -o liball.so
