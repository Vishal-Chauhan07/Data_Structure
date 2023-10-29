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
void Selection_sort(int a[],int n)
{
	int min,i=0,j=0,temp=0;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
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
	printf("\n Before Selection sort \n");
	Display(arr,size);
	printf("\n After Selection sort \n");
	Selection_sort(arr,size);
	Display(arr,size);
	return 0;
}
