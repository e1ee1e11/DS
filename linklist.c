#include <stdio.h>
#include <stdlib.h>

struct node {
	char data;
	struct node *next;
};

void main() 
{
	struct node *head, *current, *n1, *n2, *n3;

	n1 = (struct node *)malloc(sizeof(struct node));
	head->next = n1;
	n1->data = 'a';
	//n1->next = NULL;
	
	n2 = (struct node *)malloc(sizeof(struct node));
        n1->next = n2;
        n2->data = 'b';
        //n2->next = NULL;

	n3 = (struct node *)malloc(sizeof(struct node));
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
