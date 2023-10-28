#include<stdio.h>
#include<stdlib.h>
void Accept(int a[],int n)
{
	int i;
	printf("Enter %d elements one-by-one",n);
	for(i=0;i<n;i++)
	{
		printf("Enter element no.%d : ",i+1);
		scanf("%d",&a[i]);
	}
}
void Display(int a[],int n)
{
	int i;
	printf("Element you entered are given below\n");
	for(i=0;i<n;i++)
	{
		printf("Element no.%d : %d\n",i+1,a[i]);
	}
}
void Linear_Search(int a[],int n,int search)
{
	int i;
	int flag=0;
	printf("The searching Element is %d\n",search);
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Element found\n");
	}
	else
	{
		printf("Element not found\n");
	}
}
int main()
{
	int arr[100],size,s;
	printf("Enter the sixe of array:");
	scanf("%d",&size);
	printf("Enter the element to be searched :");
	scanf("%d",&s);
	Accept(arr,size);
	Display(arr,size);
	Linear_Search(arr,size,s);
	return 0;
}
