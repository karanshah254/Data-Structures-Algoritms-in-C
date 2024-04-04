- >bash : bourne again shell
- >scripting language allowing users to write sequences of commands in file known as script.
- >extension is .sh

1. Print value in shell-script
```shell
#!/bin/bash
echo "Hello World"
```

2. Variable
```shell
#!/bin/bash
number=10 # integer
echo "The number is $number"

name="John" # string
echo "My name is $name" # prints john

array=(10 20 30)
echo "First element in array is ${array[0]}" # prints 10
echo "Second element in array is ${array[1]}" # prints 20
echo "Third element in array is ${array[2]}" # prints 30
```

3. If else in Shell-Script
```shell
#!/bin/bash

number=30

# checks if number is equal to 10 or not.
if [ $number -eq 10 ]; then
    echo "The number is equal to 10"
else
    echo "The number is not equal to 10"
fi
# list of comparaters: -eq, -ne, -lt, -le, -gt, -ge
```

4. Loops in Shell-Script
```shell
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
```

5. Function 
```shell
#!/bin/bash

# function to add two numbers
add_numbers() {
    echo "Sum = $(($1 + $2))"
}

# to call function
add_numbers 5 7
```

6. Take input and output
```shell
#!/bin/bash

echo "Enter your Name: "
read userName
echo "The Name of User is $userName"
```

7. Working with files in Shell-Script
```shell
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
```

8. Working with directory
```shell
#!/bin/bash

# creates a directory
mkdir demo

# read directory
cd demo

# creating files inside it
echo "File inside this directory" > file1.txt
echo "Another file also exist" > file2.txt

# list contents
ls

# going back to parent directory
cd ..

# copying directory
cp -r demo udemyShellscript

# delete the directory
rm -rf udemyShellscript

echo "Directory operations are done"
```

9. Use of awk command
```shell
#!/bin/bash

# creates sample text file
echo -e "Karan 20\nKavan 15" > sample.txt

# display 
echo "Original content"
cat sample.txt

# use awk to print age and name
echo -e "\nUse of awk to print name and age:"
awk '{print "Name: " $1, "\tAge: "$2}' sample.txt
```

10. Using command line argument in bash
```shell
#!/bin/bash

echo "Script name: $0"
echo "First argument is $1"
echo "Second argument is $2"
echo "Total number of argument is $#"
echo "All arguments: $@"
```