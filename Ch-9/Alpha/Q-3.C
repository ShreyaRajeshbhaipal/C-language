
#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;

	clrscr();

	for(i=1;i<=7;i++)
	{
		for(j=1;j<=4;j++)
		{
		 if(i==1||i==7)
		 {
		  printf("* ");
		 }

	       else if(i>=2 && j==1 || i>=4&& j==1)

	       {
			printf("* ");
	       }

	}
		printf("\n");
	}

	getch();
}