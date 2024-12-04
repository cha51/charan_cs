#include<stdio.h>

int i;
int x[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int main3()
{
	for(i=0;i<20;i++)
	{
		printf("%d\n",x[i]);
	}
	printf("one element size is: %d\n",sizeof(x[1]));
	printf("total elements size is: %d\n",sizeof(x));
}


