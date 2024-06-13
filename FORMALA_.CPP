#include<stdio.h>
#include<conio.h>

main()
{
	     int x,y,ans;

	clrscr();

	printf("Enter any nomber :");
	scanf("%d",&x);

	printf("Enter any seconf nomber");
	scanf("%d",&y);
	printf("\n\n");

	ans = (x*x*x) + (3*x*x*y) + (3*x*y*y*y) + (y*y*y);
	printf("ans = %d",ans);







     getch();


}