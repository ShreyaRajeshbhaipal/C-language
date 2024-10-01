#include<stdio.h>

main()
{
	int i,j,n=64;
	
	for(i='E';i>='A';i--)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
