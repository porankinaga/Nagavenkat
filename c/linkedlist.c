#include<stdio.h>

struct node {
	int data;
	struct node *next;
	};
main()
{
struct node *head = NULL;
int a;
	append(&head);
	add_node(&head);
	append(&head);
	append(&head);
	append(&head);
	append(&head);
	
	printlist(head);
	reverse_list(&head);
	printlist(head);
}
append(struct node **head_ref)
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	struct node *last = *head_ref;
	int data;
	printf("Enter Data for append to end of list");
	scanf("%d",&data);
	new_node-> data = data;
	new_node->next = NULL;
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}
	while(last->next!= NULL)
		last = last->next;
	last->next = new_node;
	return;
}
add_node(struct node **head_ref)
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	int data;
	printf("Enter data to put as head");
	scanf("%d",&data);
	new_node->data = data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
	return;
}

reverse_list(struct node **head_ref)
{
	struct node *prev = NULL;
	struct node *current = *head_ref;
	struct node *next = NULL;
	while(current!= NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head_ref = prev;
}


printlist(struct node *node)
{
	while(node!= NULL)
	{
		printf("%d ",node->data);
		node = node->next;
	}
	printf("\n");
}

