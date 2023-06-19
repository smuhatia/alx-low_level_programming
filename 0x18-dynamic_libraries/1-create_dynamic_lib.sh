#/bin/bash
gcc -C -fPIC *.c
gcc -shared *.o -o liball.so
