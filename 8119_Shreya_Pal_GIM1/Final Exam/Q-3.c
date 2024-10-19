#include<stdio.h>

main()
{
	int row,col;
	
	printf("Enter number of row:");
	scanf("%d",&row);
	
	printf("Enter number of Column:");
	scanf("%d",&col);
	
	printf("\nArray Input\n");
	
	int i,j;
	int a[i][j],b[i][j];
	int sum[i][j];
	
	
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n\n");
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n\n");
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]= a[i][j]+b[i][j];
		}
		printf("\n\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n\n");
	}
	
	
}
