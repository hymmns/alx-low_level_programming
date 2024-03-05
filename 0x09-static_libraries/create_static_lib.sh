#!/bin/bash

sudo gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

sudo ar -rc liball.a *.o

sudo ranlib liball.a
