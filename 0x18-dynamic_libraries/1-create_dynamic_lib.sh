#/bin/bash
gcc -c -fPIC *.c
gcc -shared *.o -o lisball.so
