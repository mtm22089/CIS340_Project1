/* I. Part1:

 In this assignment, you will write a program to:
 Build a doubly linked list given the keyboard inputs or the user provided data file;
 Perform a quick-sort (in the ascending order of the value) for the above linked list, and print the list out to the screen. 
 For comparison purpose, please also print the unsorted linked list.
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
 30<==>20<==>50<==>70<==>10*/
 
 /* Project 1
 	Class: System Programming
 	Authors: 	Elizabeth Barkett	(33.3%)
 				Matthew Macias		(33.3%)
 				Yong Yu				(33.3%)
 	Description: Accepts integers, creates a doubly linked list,
 	then sorts via the quicksort method
 
 */
 
 #include <stdlib.h>
 #include <stdio.h>
 #include "node.h"
 
 int main(void){
 	struct mynode *list = (struct mynode *)malloc(sizeof(struct mynode));
 	struct mynode *node = list;
 	
 
 
 return 0;
} 	
 	
