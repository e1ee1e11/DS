#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
	char data;
	struct NODE *next;
}node;

node* create_node(char);
void insert_node(node*, node*);
void print_list(node* );
void remove_node(node* );
void free_list(node* );

void main() 
{	
	//create node n1~n3 & list
	node *list = create_node('\0');
	node *n1 = create_node('a');
	node *n2 = create_node('b');
	node *n3 = create_node('c');
	
	//list->n1->n2->n3
	insert_node(list, n1);
	insert_node(n1, n2);
	insert_node(n2, n3);
	print_list(list);
	
	//create node n4~n6 & list1
	node *list1 = create_node('\0');
	node *n4 = create_node('d');
        node *n5 = create_node('e');
        node *n6 = create_node('f');
	
	//list1->n4->n5->n6
	insert_node(list1, n4);
	insert_node(n4, n5);
        insert_node(n5, n6);
	
	//insert linklist1 between n1 and n2
	n6->next = n2;
	n1->next = n4;	
	
	/*	
	//linklist ring
	n3->next = n1;
	*/
	
	remove_node(n5); //the func. is remove a node behind itself
	//print link list
	print_list(list1);
	print_list(list);
	
	free_list(list1);
	free_list(list);
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

void remove_node(node* N1)
{
	N1->next = N1->next->next;
}

void free_list(node* list)
{	
	//use recursive method to free linklist 
	if(list->next != NULL)
	{
		free_list(list->next);
	}
	
	free(list);
}
