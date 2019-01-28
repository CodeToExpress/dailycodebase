#!/usr/bin/env bash

clear
g++ solution.cpp -std=gnu++17

if [ $? -eq 0 ]; then
    DIR=rationalsequence2

    for i in {1..2}
    do
        ./a.out < ${DIR}/sample00${i}.in > ${DIR}/sample00${i}.o && diff ${DIR}/sample00${i}.o ${DIR}/sample00${i}.ans
         open ${DIR}/sample00${i}.o
    done
fi




