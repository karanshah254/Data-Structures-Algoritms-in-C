#!/bin/bash

# create a file
touch file1.txt

# write text in file
echo "Some content in file" > file1.txt

# append to file
echo "Appended additional to this file" >> file1.txt

# read from file
cat file1.txt

# copy content to next file
cp file1.txt newFile.txt

# move/rename the file
mv newFile.txt to demoShellScript.txt

# delete the file
rm demoShellScript.txt

echo "File operation are completed"