#!/bin/bash

factorial() {
    if [ $1 -eq 0 ] || [ $1 -eq 1 ]; then
        echo 1
    else
        local result=1
        for ((i = 2; i <= $1; i++)); do
            result=$((result * i))
        done
        echo $result
    fi
}

# Input
echo "Enter a number to find its factorial:"
read n

fact=$(factorial $n)

echo "The factorial of $n is: $fact"