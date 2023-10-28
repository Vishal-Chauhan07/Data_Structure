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
void Binary_Search(int a[],int n,int s)
{
	int low,mid,high;
	int flag=0;
	low=0;
	high=n-1;
	while(low <= high)
	{
		mid=(low+high)/2;
		if(a[mid]==s)
		{
			flag=1;
			break;
		}
		else
		{
			if(s<a[mid])
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
	}
	if(flag==1)
	{
		printf("Enter found.\n");
	}
	else
	{
		printf("Element not found.");
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
	Binary_Search(arr,size,s);
	return 0;
}
