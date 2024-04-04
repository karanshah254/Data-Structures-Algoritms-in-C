#!/bin/bash

# creates sample text file
echo -e "Karan 20\nKavan 15" > sample.txt

# display 
echo "Original content"
cat sample.txt

# use awk to print age and name
echo -e "\nUse of awk to print name and age:"
awk '{print "Name: " $1, "\tAge: "$2}' sample.txt