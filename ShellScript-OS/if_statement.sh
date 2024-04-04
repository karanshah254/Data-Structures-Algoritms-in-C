#!/bin/bash

number=30

# checks if number is equal to 10 or not.
if [ $number -eq 10 ]; then
    echo "The number is equal to 10"
else
    echo "The number is not equal to 10"
fi

# list: -eq, -ne, -lt, -le, -gt, -ge