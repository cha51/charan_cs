#include<stdio.h>
void main2()
{
	int i,j;
	int a[2][3]={{1,2,3},
                 {4,5,6}
	                   };
	//printf("%d\n%d\n",&a[i][j],(*(a+0)+0));
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\n",sizeof (a[i][j]));
			printf("%d\n",a[i][j]);
			printf("%d\n",a[i][j],*(*(a+i)+j));
			printf("%d\n%d\n",&a[i][j],(*(a+i)+j));

		}
	}
}


