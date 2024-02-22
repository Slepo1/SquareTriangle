#!/bin/bash

compile="g++ *.cpp -o first"
launch="./first"

echo "c++ files try"
$compile
$launch

compile="python3 main.py"
#launch="python3 main.py"

echo "python file try"
$compile
#$launch
