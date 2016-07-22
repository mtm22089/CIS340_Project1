#ifndef node_h
#define node_h

struct mynode {
	int const value;
	struct mynode *next;
	struct mynode *prev;
};

struct mynode* quicksort(struct mynode *head);

void printlist(struct mynode *head);

#endif
