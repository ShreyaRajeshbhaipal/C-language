#include<stdio.h>
#include<conio.h>

main()
{
	int a,n;
	clrscr();

	printf("Enter any year :");
	scanf("%d",&a);

	printf("Enter any second year :");
	scanf("%d",&n);

	while(a<=n)
	{
		if(a%2==0)
		printf("%d\n",a);
		a=a+4;




	}








	getch();
}