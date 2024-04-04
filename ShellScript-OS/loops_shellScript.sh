#!/bin/bash

# two types of loop: (for and while) loops

# 1. print hello world 10 times using for loop
echo -e "\nUse of for loop"
for task in {1..10}; 
do
    echo "$task time Hello World!!"
done

# 2. Use while loop to print Hello World 10 times
echo -e "\nUse of while loop"
counter=1
while [ $counter -le 10 ]; 
do
    echo "$counter Hello world!"
    ((counter++))
done