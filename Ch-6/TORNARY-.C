#include<stdio.h>
#include<conio.h>

main()
{
	 int a,b,c;

	clrscr();

	printf("Enter any first number :");
	scanf("%d",&a);
	printf("Enter any second number :");
	scanf("%d",&b);
	printf("Enter any second number :");
	scanf("%d",&c);
	printf("\n\n");

	clrscr();

	(a<b)
	   ?  (a<c)
	       ?printf("%d is minimum number",a)
	       :printf("%d is minimum number",c)



	   :   (b<c)

	       ? printf("%d is minimum number",b)
	       : printf("%d is minimum number",c);


	getch();
}