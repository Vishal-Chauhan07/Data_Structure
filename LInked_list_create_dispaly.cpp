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
int main()
{
	int choice;
	printf("1--->insert\n");
	printf("2--->display\n");
	printf("3--->exit\n");
	
	while(1)
	{
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n");
				create();
				printf("\n");
				break;
			
			case 2:
				printf("\n");
				display();
				break;
			
			case 3:
				exit(0);
		}
	}
}
