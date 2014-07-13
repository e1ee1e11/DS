#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
	char data;
	struct NODE *next;
}node;
node *createnode();
void main() 
{
	node *head, *current, *n1, *n2, *n3;

	n1 = (node* )malloc(sizeof(node));
	head->next = n1;
	n1->data = 'a';
	//n1->next = NULL;
	
	n2 = (node* )malloc(sizeof(node));
        n1->next = n2;
        n2->data = 'b';
        //n2->next = NULL;

	n3 = (node* )malloc(sizeof(node));
        n2->next = n3;
        n3->data = 'c';
        n3->next = NULL;
	
	current = head;
	while(current->next != NULL)
	{
		current = current->next;
		printf("%c\n",current->data);
	}
}

node *createnode()
{

}
