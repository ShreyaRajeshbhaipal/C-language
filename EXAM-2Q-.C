#include<stdio.h>
#include<conio.h>

main()

{
	int n,sum=0,a;

	clrscr();

	printf("Enter any number :");
	scanf("%d",&n);

	a=n%10;

	while(n>=10)
	{
		n=n/10;




	}

	sum=a+n;

	printf("%d + %d = %d",a,n,sum);





	getch();
}