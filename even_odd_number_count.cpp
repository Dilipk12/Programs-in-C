#include<stdio.h>
int main()
{
	int arr[10];
	int i, evencount=0,oddcount=0;
	printf("enter the array elements:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		evencount++;
		else
		oddcount++;
	}
	printf("count of even Number %d\n count of odd number %d",evencount,oddcount);
return 0;
}
