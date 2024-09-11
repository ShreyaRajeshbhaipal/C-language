#include<stdio.h>
main()
{
	int size;
	
	printf("Enter Array's size:");
	scanf("%d",&size);
	
	int a[size];
	int i;
	
	printf("\nArray Input:");
	
	for(i=0;i<size;i++)
	{
		printf("Enter a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n Array Output\n");
	
	for(i=0;i<size;i++)
	{
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
		printf("\n\n");
	}
}
