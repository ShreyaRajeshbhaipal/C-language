#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;

	clrscr();

	for(i=5;i>=1;i--)

	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0){

				printf("\t0"); }
			else{

			printf("\t1"); }


		}

		printf("\n\n");
	}


	getch();
}