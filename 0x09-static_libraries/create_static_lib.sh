#!/bin/bash
gcc -Wall -pedantic -Werror -Wno-unused-parameter -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
