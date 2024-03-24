# File Handling Basics
A large program deployed for heavy applications cannot function without files, since we can get input from them as well as print output from them very easily. We can also save a lot of program space by accessing the file's data only when needed, making the program more efficient and faster.

 

## Why do we need to handle files in C?
- Files are used to store content hence reducing the actual program's size.
- We can read or access data from files.
- The data in files remain stored even after the program's execution is terminated.
 

Files are stored in non-volatile memory. To understand what a non-volatile memory is and how it is better in terms of storing things for longer, we have to see the differences between volatile and non-volatile memory.

 

|VOLATILE MEMORY | NON- VOLATILE MEMORY|
|:---------------|:--------------------|
|The data can only remain in the system while the computer’s power is on.|The data remains in the program even after the computer’s power is off. It gets retrieved after the system gets on again.|
|Volatile memory can only hold information when there is a constant power supply.|Non volatile memory can also hold information even in case of non constant power supply.|
| Data gets held for a short period in case of volatile memory.|Data gets held for a longer term in case of non-volatile memory.|
|RAM is an example|Hard Disk is an example.|

 

## What are the different type of files?
There are two types of files:

- Binary Files

Binary files store data in 01 i.e., binary format. They are not directly readable. In order to read binary files, you will need software or an application. An example of binary file is a .bin file.

 

- Text Files

Text files store data in a simple text format. They are directly readable and no external software is required to access them. An example of a text file is a .txt file.

 