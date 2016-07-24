#include <stdlib.h>
#include <stdio.h>
#include "node.h" //including future methods

struct mynode* newnode(int data){
	
	struct mynode *new = malloc(sizeof(new));
	
	new->next = NULL;
	new->prev = NULL;
	*(int *)&new->value = data;
	
	return new;
}

void addNode(int data){
	
	struct mynode *add = newnode(data);
	
	if (head == NULL){
		head = add;
	}
	if (tail == NULL){
		tail == add;
		return;
	}

	node->prev = tail;
	tail->next = add;
	tail = add;

}
	
//function to print whole list starting at the head
void printlist(struct node *head){

	while(head != NULL){
		printf("%d", head->data);
		head = head->next;
	}
}

//quicksort method start
//return the head node if array only holds one element
struct mynode* quicksort(struct mynode *head){
	if (head->next == null) {
		return head;
		}
//declare pointers & two separate lists for sorting
struct mynode *current = head;
struct mynode *Llist = (struct mynode *) malloc(sizeof(struct mynode));
struct mynode *Rlist = (struct mynode *) malloc (sizeof(struct mynode));
struct mynode *left = Llist;
struct mynode *right = Rlist;

int switch = head -> value; //used to switch the current value with the new value

while (current ->next != null){
	//moving the current value to the next node
	current = current->next; 
	/*if current value is less than switch value
	move to the next node*/
	if (current ->value < switch){
		left -> next = (struct mynode *)malloc(sizeof(struct mynode));
		left = left->next;
		left ->value = current ->value;
	} else {
		right -> next (struct mynode *)malloc(sizeof(struct mynode));
		right = right ->next;
		right -> value = current ->value;
	}
}
	
Rlist->value = switch;

if (left != Llist) {
	left -> next = Rlist;
	Llist = quicksort(Llist->next);
	createPreviousLinks(Llist); //go through method that makes doubly linked list
		return Llist;
	}else{
	Rlist ->next = quicksort(Rlist ->next);
	createPreviousLinks(Rlist);
		return Rlist;
	}
}	


void createPreviousLinks (struct mynode *){
	struct mynode *previous =(struct mynode*)malloc(sizeof(struct mynode));
	while (node ->next != NULL){
		previous = node;
		node = node->next;
		node ->prev = previous;
	}
}	

//print and free functions

void printlist2(struct mynode *head){
	struct mynode *node = head:
	int i;
	for (i = 1; node ->next != NULL; i++){
		printf("%d " node ->value);
		node = node->next;
}

void freelist(struct mynode *head){
	struct mynode *temp, *node = head;
	while (node){
		temp = node;
		node = node->next;
		free(temp);
	}
	head = NULL;
}
