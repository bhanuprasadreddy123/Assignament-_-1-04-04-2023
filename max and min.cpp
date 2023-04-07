#include<stdio.h>
int main()
{
	int i,n,max,min;
	printf("Enter the length of array : ");
	scanf("%d",&n);
	int arr[n];
		printf("enter the element in the array : \n ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for (i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if (arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("The maximum vaiue in the array is %d\n ",max);
	printf("The minimum vaiue in the array is %d ",min);
	
}