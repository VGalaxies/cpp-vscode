#!/bin/bash
g++ -g main.cpp -o main
gdbserver :1234 main < in > out