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
void Bubble_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
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
	printf("\n Before Bubble sort \n");
	Display(arr,size);
	printf("\n After Bubble sort \n");
	Bubble_sort(arr,size);
	Display(arr,size);
	return 0;
}
