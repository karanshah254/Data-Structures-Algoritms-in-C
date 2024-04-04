#!/bin/bash

# creates a directory
mkdir demo

# read directory
cd demo

# creating files inside it
echo "File inside this directory" > file1.txt
echo "Another file also exist" > file2.txt

ls

# going back to parent directory
cd ..

# copying directory
cp -r demo udemyShellscript

# delete the directory
rm -rf udemyShellscript

echo "Directory operations are done"