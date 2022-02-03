#!/bin/bash
make -f p01make clean
make -f p01make p01.o
make -f p01make p01lex.cpp
make -f p01make p01lex.o
make -f p01make p01
