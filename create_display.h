#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL,*newnode,*cur,*ptr;
void create()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=NULL;
	printf("Enter the data:");
	scanf("%d",&newnode->data);
	
	if(start == NULL)
	{
		start=newnode;
        cur=newnode;
	}
	else
	{
		cur->next=newnode;
		cur=newnode;
	}
}
void display()
{
	ptr=start;
	while(ptr->next!=NULL)
	{
		printf("%d-->",ptr->data);
		ptr=ptr->next;
	}
	printf("%d-->",ptr->data);
	printf("NULL\n\n");
}
