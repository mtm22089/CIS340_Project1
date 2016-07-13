# CIS340_Project1
Build a doubly linked-list with given data, perform a quick sort, and print the sorted and unsorted list to screen.
Will edit later, but for now, this holds the direct assignment instructions.


I. Part1:

In this assignment, you will write a program to:
Build a doubly linked list given the keyboard inputs or the user provided data file;
Perform a quick-sort (in the ascending order of the value) for the above linked list, and print the list out to the screen. For comparison purpose, please also print the unsorted linked list.
Your doubly linked list node data structure is defined as in the following:

struct mynode {
	int const value;
	struct mynode *next;
	struct mynode *prev;
};
A pre-prepared data file example is listed at below:

30
20
50
70
10
0
Given the file above, your program should build a linked list with 5 nodes. Note that 0 indicates the end of the data file and 0 should not be included in the linked list. Given the above 5 data, your unsorted linked list should look like:
30<==>20<==>50<==>70<==>10

Your program's implementation must include the following features:
Your program must be compiled from 3 source files:
main.c (Handles input and output, as well as top-level program logic.)
node.h (Declares the data structure and function quicksort, which sorts a given doubly linked list with the ascending order), and printlist, which prints a linked list to the screen.
node.c (Defines the function quicksort and printlist, as declared in node.h.)
Your node.h file must contain the proper preprocessor directives to prevent multiple inclusion.  
The main function must use scanf function call to read the input data from keybord (note that the input redirection can be used to directly read the data from a data file). The number of data (in the data file) is not pre-determined.
The function quicksort must be declared exactly as follows.
return value: struct mynode *.
argument (only one): struct mynode *, which is the head of the given linked list.
Note that you must implement the quicksort() function by yourselves and cannot use any existing implementation from other library.
The function printlist must be declared exactly as follows.
return value: void.
argument (only one): struct mynode *, which is the head of the given linked list.



Thinigs to note:

Minimum Requirements
Correctly read the input data provided either from the keyboard (by default) or from a data file (if input redirection is used). The data entered from keyboard should match exactly to the data file (if provided), i.e., no other cutomized commands (not specified in the description) are allowed.
Proper declaration and definition of the functions required.
Once a node is created, you cannot change its value. Therefore, when you sort the the linked list, you have to move the node around rather than swap nodes' values. Note: the node's value field is declared as int const so you cannot modify the value anyway.
Correctly output the linked list (before and after being sorted) to the screen.
Correctly perform the quicksort algorithm (but not any other sorting algorithm).
The correct execution of your program without any unexpected errors and unnecessary extra debug messages, including the segmentation fault.
Your work must be submitted in files with the following names:
main.c
node.h
node.c
These files must compile on a department LINUX machine with the following command:
make.
Therefore a Makefile has to be provided with your submission.
A clean compilation without any error and warning message.
In addition, you must provide a README file (in txt format) to decribe the project. Please see the submission instruction for the requirement.
Group picture: each group takes a group picture (that allows the instructor to easily identify each of the group members). The picture has to be taken inside FH128 (find a way to prove it). Include the jpg file in your submission folder.

II. Part2:
You will perform memory allocation, arrays and functions. You will write two source code files, file2string.c and custout.c.
In file2string.c, you write a main() in C which reads an input file (specified by the first command line argument) and copies it byte by byte into an array of char, which we'll call farray for convenience. If the input file does not end with a null character, then add an extra null character and the end of farray. Your main( ) should also create an array sarray (called that here for purposes of discussion) of const char* so that sarray gives the contents of farray as an array of C style (null terminated) strings. If farray is broken up into exactly k strings by null characters (having value 0, i.e., equal to the character constant '\0'), then if we concatenate the strings sarray[0], sarray[1], ..., sarray[k-1] including the null character at the end of each string then the sequence of characters obtained is exactly that of farray. In addition, set sarray[k] = NULL, so that the array of strings is NULL terminated. Finally, for testing purposes main( ) should call custout( sarray, flags ) as its last action, where flags is the second command line argument or else the null string "" if there is no second command line argument.

In custout.c, you write a function custout( ) which returns void and takes two arguments, of types const char*[] and const char*, in that order. The first argument is assumed to be a NULL terminated array of C style strings, and the second is assumed to a C style string. The function call custout(sa, fl) should write the strings of sa to standard output, one per line, in an order which is determined by fl. If fl is the empty string or else not of a proper nonempty form then the output order should be exactly as in sa. A proper nonempty form for fl is "-x" where x is 'f', 'F', 'b', or 'B'. The significance of f or F is to specify normal string order as provided by strcmp( ), whereas b or B specifies the opposite order. In the absence of r or R strcmp( ) is applied directly to the strings of s.

For example, suppose ifile is in your working directory and contains the ten characters 'u', 'a', '\0', '\0', 'Z', '3', 'q', '\0', '6', and '6', in that order. Then in main farray[0], ..., farray[10] should be assigned the eleven characters 'u', 'a', '\0', '\0', 'Z', '3', 'q', '\0', '6', '6', and '\0'. The values of sarray[0], .., sarray[3] should be assigned the addresses of farray[0], farray[3], farray[4], and farray[8], respectively, and sarray[4] should be NULL. When file2string.c is compiled along with custout.c to an executable file named file2string, the command
$ file2string ifile
should result in the following output to the screen:
ua

Z3q
66
whereas the command
$ file2string ifile -F
should result in the following output to the screen:

     66
     Z3q
     ua
In the first set of output the second line is blank, corresponding to the empty string. In the second set of output it is the first line which is blank. 

Things to note: 
The names of the files must be followed exactly, so that the teaching assistant and the instructor can test your project without editing your code.
You are only allowed to use the functions that are covered by our lectures.
Dynamic memory allocation in C can be done with malloc( ) and free( ). These are declared in .
You can use the sorting function you created in proj1a in this project. However, you are not allowed to use any library sorting functions.
The program should be robust and include appropriate error checks. For instance, if in one of the sample commmands above ifile already exists then an error message should be issued; if it does exist, file named ifile should not be removed or altered.

III. Submission:
Each group submits one copy of the source code and the group picture.
Create a folder and name it as your group name, e.g., Group_A.
Create two folders, part1 and part2, underneath "Group_A".
Copy all your source code to the above folders (clean your source code folder and remove all binary files).
Compile a README file (in text format only) to each part (of the project) and provide the following information:
Project description
Group members' contributions (in percentage)
Compiling instruction
A sample test run
Existing bugs (things not finished)
Log in grail, go to the parent director of your group folder, and run (suppose the group folder is "Group_A")
turnin -c cis340w -p proj1 Group_A
If there is no error message, your submission is successful.
Your most recent submission will always automatically overwrite the previous one.
