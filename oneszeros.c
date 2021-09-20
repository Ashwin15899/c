#include<stdio.h>
void main()
{
	int i,j,k,a=1,b=0;
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("%d%d",a,b);
		}
		printf("\n");
        for(k=1;k<=4;k++)
		{
			printf("%d%d",!a,!b);
		}		
		printf("\n");
	}
}
