#include<stdio.h>
main()
{
	int i,j,k;
	k=1;
	for(i=5;i>=1;i--)
	{
			if(i==4)
			{
				for(j=k;j<=5;j++)
				{
					if(j==3||j==4)
					printf(" ");
					else
					printf("%d",j);
				}
			}
			else if(i==3)
			{
				for(j=k;j<=5;j++)
				{
					if(j==4)
					printf(" ");
					else
					printf("%d",j);
				}
			}
			else
			{
				for(j=k;j<=5;j++)
				{
					printf("%d",j);
				}
			}
			printf("\n");
			k++;
	}
}
