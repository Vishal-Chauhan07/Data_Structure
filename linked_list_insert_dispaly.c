#include<stdio.h>
#include<stdlib.h>
#include"create_display.h"
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
