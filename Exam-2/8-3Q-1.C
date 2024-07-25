#include<stdio.h>
#include<conio.h>

main()

{
	int A = 'a';

	clrscr();

	do
	{

		printf("%c\n",A);

		A+=4;

	}  while(A<='z');




	getch();
}