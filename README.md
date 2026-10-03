Student Record Management System

A simple Student Record Management System developed in C programming language. The project is a menu-driven console application designed to manage student information efficiently.

📌 Project Overview

The Student Record Management System allows users to perform common operations on student records through a simple command-line interface.

The project is organized into multiple C source files, with each file handling a specific functionality of the system.

✨ Features

➕ Add a new student record

🗑️ Delete an existing student record

✏️ Modify student information

📋 Display student records

🔃 Sort student records

💾 Save student records

🚪 Exit the application

🧩 Modular C programming using multiple source files

📂 Project Structure
STUDENT-RECORD-MANAGEMENT-SYSTEM/
│
└── student_record/
    ├── main.c
    ├── header.h
    ├── stud_add.c
    ├── stud_del.c
    ├── stud_save.c
    ├── stud_sort.c
    ├── stud_show.c
    ├── stud_mod.c
    ├── stud_exit.c
    └── Makefile

🛠️ Technologies Used

Programming Language: C

Compiler: GCC / cc

Build Tool: Make

Operating System: Linux / Unix-based systems

⚙️ Compilation

Make sure GCC and Make are installed on your system.

Clone the repository:

git clone https://github.com/Balasakthikumar/STUDENT-RECORD-MANAGEMENT-SYSTEM.git


Move into the project directory:

cd STUDENT-RECORD-MANAGEMENT-SYSTEM/student_record


Compile the project using the Makefile:

make


This generates the executable:

out

▶️ Run the Program

After successful compilation, run:

./out


The program will display the student management menu and allow you to select the required operation.

🧩 Source Files
File	Description
main.c	Main program and menu handling
header.h	Function declarations and common definitions
stud_add.c	Adds student records
stud_del.c	Deletes student records
stud_save.c	Saves student records
stud_sort.c	Sorts student records
stud_show.c	Displays student records
stud_mod.c	Modifies existing student records
stud_exit.c	Handles program exit
🔨 Makefile

The project uses a Makefile to compile each source file separately and link all object files into the final executable.

out: main.o stud_add.o stud_del.o stud_save.o stud_sort.o stud_show.o stud_mod.o stud_exit.o
	cc main.o stud_add.o stud_del.o stud_save.o stud_sort.o stud_show.o stud_mod.o stud_exit.o -o out

main.o: main.c header.h
	cc -c main.c

stud_add.o: stud_add.c header.h
	cc -c stud_add.c

stud_del.o: stud_del.c header.h
	cc -c stud_del.c

stud_save.o: stud_save.c header.h
	cc -c stud_save.c

stud_sort.o: stud_sort.c header.h
	cc -c stud_sort.c

stud_show.o: stud_show.c header.h
	cc -c stud_show.c

stud_mod.o: stud_mod.c header.h
	cc -c stud_mod.c

stud_exit.o: stud_exit.c header.h
	cc -c stud_exit.c

🧠 Concepts Practiced

This project demonstrates several important C programming concepts:

Functions

Header files

Modular programming

Structures

Arrays

Pointers

File handling

Searching and sorting

Dynamic memory concepts

Makefile and separate compilation

🎯 Project Objective

The main objective of this project is to provide a basic and easy-to-use system for maintaining student records while demonstrating modular programming and file handling in C.

👨‍💻 Author

Balasakthikumar

GitHub:
https://github.com/Balasakthikumar

📄 License

This project is intended for educational and learning purposes.
