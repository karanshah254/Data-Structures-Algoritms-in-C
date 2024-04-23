#!/bin/bash

# Find greatest of 3 numbers

find_greatest() {
    if [ $num1 -gt $num2 ] && [ $num1 -gt $num2 ]; then
        echo "$num1 is greatest of all"

    elif [ $num2 -gt $num3 ]; then 
        echo "$num2 is greatest"
    else 
        echo "$num3 is greatest"
        fi
    }

read -p "Enter first number: " num1
read -p "Enter second number: " num2
read -p "Enter third number: " num3

find_greatest $num1 $num2 $num3