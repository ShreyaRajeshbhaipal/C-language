#include<stdio.h>

main()
{
	float c,f;
	
	printf("Enter any number:");
	scanf("%f",&c);
	
	f = (c * 9/5) + 32;
	
	printf("convert temperature from degree Celsius to Fahrenheit is %f",f);

}
