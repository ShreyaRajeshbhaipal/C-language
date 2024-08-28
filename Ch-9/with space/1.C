#include<stdio.h>
#include<conio.h>

main()
{
	clrscr();

	int s,i,j;

	for(i=1;i<=5;i++)
	{
		for(s=5;s>i;s--)
		{
			printf(" ");
		}

		for(j=i;j>=1;j--)
		{
			printf("%c",64+j);
		}

		printf("\n");
	 }

	getch();
}