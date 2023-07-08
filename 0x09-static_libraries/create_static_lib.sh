#!/bin/bash
gcc -c ./*.c && ar rcs liball.a ./*.o && ranlib libmy.a
