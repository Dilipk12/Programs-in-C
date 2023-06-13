#include<stdio.h>
int main()
{
	int rad;
	float pi=3.14,ci,area;
	printf("enter the area\n");
	scanf("%d",&rad);
	
	area=3.14*rad*rad;
	printf("area of circle %f\n",area);
	
	ci=2*pi*rad;
	printf("area of circumference %f",ci);
	
	return 0;
}
