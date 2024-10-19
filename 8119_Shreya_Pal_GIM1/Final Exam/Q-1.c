#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter a value:");
	scanf("%d",&a);
	
	printf("Enter b value:");
	scanf("%d",&b);
	
	printf("\nValue before swapping\n");
	
	printf("a=%d\n",a);
	printf("b=%d",b);
	
	printf("\nValue after swapping\n");
	
	b=b-a;
	a=a+b;
	
	
	printf("\na=%d\n",a);
	printf("b=%d",b);
	
}
