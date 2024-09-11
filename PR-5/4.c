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
	
	printf("Array Output\n");
	
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	int r,rsum=0;
	
	printf("\n\nEnter r:");
	scanf("%d",&r);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==r)
			{
				printf("%d ",a[i][j]);
				rsum += a[i][j];
			}
			
		}
	}
	
	printf("\nSum:%d",rsum);
	
	int c,csum=0;
	
	printf("\n\nEnter c:");
	scanf("%d",&c);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==c)
			{
				printf("%d ",a[j][i]);
				csum += a[j][i];
			}
			
		}
	}
	
	printf("\nSum:%d",csum);
	
	
}
