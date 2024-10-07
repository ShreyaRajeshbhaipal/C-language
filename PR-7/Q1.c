#include<stdio.h>


int add(int x,int y)
{	
	return x+y;
}

int sub(int x,int y)
{	
	return x-y;
}

int mul(int x,int y)
{
	return x*y;
}

float div(float a,float b)
{	
	return a/b;
}

int modual(int x,int y)
{	
	return x%y;
}

int main()
{
	int c,j;
	
	int x,y;
	
	float a,b;
	do
	{
	
	printf("\n\n***Arithmetic Operations Calculator***\n\n");
	printf("Press 1 for Addition\n");
	printf("Press 2 for Subtraction\n");
	printf("Press 3 for Multiplication\n");	
	printf("Press 4 for Division\n");
	printf("Press 5 for Modules\n");
	printf("Press 0 for Exit\n");
	printf("\n\nEnter any number:");
	scanf("%d",&c);
	

	
			switch(c)
			{
				case 1:
					printf("Enter First Integer number:");
					scanf("%d",&x);
	
					printf("Enter Second Integer number:");
					scanf("%d",&y);
					printf("%d + %d = %d",x,y,add(x,y));
				break;
				
				case 2:
					printf("Enter First Integer number:");
					scanf("%d",&x);
	
					printf("Enter Second Integer number:");
					scanf("%d",&y);
					printf("%d - %d = %d",x,y,sub(x,y));
				break;
				
				case 3:
					printf("Enter First Integer number:");
					scanf("%d",&x);
	
					printf("Enter Second Integer number:");
					scanf("%d",&y);
					printf("%d * %d = %d",x,y,mul(x,y));
				break;
				
				case 4:
					printf("Enter First Integer number:");
					scanf("%f",&a);
	
					printf("Enter Second Integer number:");
					scanf("%f",&b);
					printf("%.2f / %.2f = %.2f",a,b,div(a,b));
				break;
				
				case 5:
					printf("Enter First Integer number:");
					scanf("%d",&x);
	
					printf("Enter Second Integer number:");
					scanf("%d",&y);
					printf("%d %% %d = %d",x,y,modual(x,y));
				break;
				
			default: 
				printf("Exitting Calculatur....");
		     	printf("\n");	
			}
		}while(c!=0);
		
	printf("\n");
}
