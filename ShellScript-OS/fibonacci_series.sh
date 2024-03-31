#!/bin/bash

generate_fibonacci() {
    a=0
    b=1
    echo "Fibonacci series up to $1 terms:"
    echo $a
    echo $b

    for ((i=2; i<$1; i++)); do
        c=$((a + b))
        echo $c
        a=$b
        b=$c
    done
}

# Main
read -p "Enter the number of terms for Fibonacci series: " n
generate_fibonacci $n