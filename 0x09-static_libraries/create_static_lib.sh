#!/bin/bash
gcc -c *c
ar rc liball.a *.o
ar -d liball.a *.c
