#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
	char data;
	struct NODE *next;
}node;

node* create_node(char);
void insert_node(node*, node*);
void print_list(node* );

void main() 
{
	node *list = create_node('\0');
	node *n1 = create_node('a');
	node *n2 = create_node('b');
	node *n3 = create_node('c');
	
	insert_node(list, n1);
	insert_node(n1, n2);
	insert_node(n2, n3);
	print_list(list);
}

node *create_node(char data)
{
	node* n = (node* )malloc(sizeof(node));
	n->data = data;
	n->next = NULL;
	
	return n;
}

void insert_node(node* N1, node* N2)
{
	N2->next = N1->next;
	N1->next = N2;
}

void print_list(node* list)
{
	node* n = list;
	while(n != NULL)
	{
		printf("%c",n->data);
		n = n->next;
	}
	printf("\n");
}
