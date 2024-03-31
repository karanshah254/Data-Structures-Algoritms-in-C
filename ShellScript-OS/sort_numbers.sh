#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Usage: $0 <number1> <number2> ..."
    exit 1
fi

numbers=("$@")

n=${#numbers[@]}
i=0

while [ $i -lt $n ]; do
    j=$((i + 1))
    while [ $j -lt $n ]; do
        if [ ${numbers[$i]} -lt ${numbers[$j]} ]; then
            temp=${numbers[$i]}
            numbers[$i]=${numbers[$j]}
            numbers[$j]=$temp
        fi
        j=$((j + 1))
    done
    i=$((i + 1))
done

echo "Numbers in descending order:"
for num in "${numbers[@]}"; do
    echo "$num"
done