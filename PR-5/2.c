#include<stdio.h>
main()
{
	int row,col;
	
	printf("Enter Row:");
	scanf("%d",&row);
	
	printf("Enter Column:");
	scanf("%d",&col);
	
	int a[row][col];
	int i,j;
	
	printf("\nArray Input:");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		printf("Enter a[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
	    }
	    printf("\n\n");
	}
	
	int large=0;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]>large)
			{
				large=a[i][j];
			}
		}
	}
	
	printf("Large Value:%d",large);
}
