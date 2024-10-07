#include<stdio.h>

float add(float a,float b)
{
	
	return a+b;
	
	
	
}

float sub(float a,float b)
{
	
	return a-b;
	
	
	
}
float mul(float a,float b)
{
	
	return a*b;
	
	
	
}
float div(float a, float b)
{
	
	return a/b;
	
	
	
}int  mod(int c,int d)
{
	
	return c%d;
}
	
int main()
{
	float a,b,ans;
	int c,d,i;
	
	do
	{
		 printf("Press 1 for add\n");
		 printf("Press 2 for Sub\n");
		 printf("Press 3 for Mul\n");
		 printf("Press 4 for Div\n");
		 printf("Press 5 for Mod\n");
		 printf("Press 0 for exit\n");
		 
		 scanf("%d",&i);
		 
		 if(i==0)
		 {
		 	printf("Exitting Calculater,good bye");
		 }
		 else
		 {
		 	switch(i)
		 	
		 	case 1 :
		 			ans=a+b;
		 			printf("%d+%d=%d",a,b,ans);
		 		
		 		break;
		 		
		 	case 2 :
		 		
				 
		 			ans=a-b;
		 			printf("%d-%d=%d",a,b,ans);
		 		
		 		break;	
		 		
			case 3 :
		 			ans=a*b;
		 			printf("%d*%d=%d",a,b,ans);
		 		
		 		break;	 
		 	
		 	case 4 :
		 			ans=a/b;
		 			printf("%d/%d=%d",a,b,ans);
		 		
		 		break;
		 	
		 	case 5 :
		 			ans=a%b;
		 			printf("%d %% %d=%d",a,b,ans);
		 		
		 		break;
		 	
		 	
		 	
		 	
		 	
		 	
		 }
		 
		 
		 
		 
		 
	}while(i!=0);
	
	
	
	
	
	
	
	
}
	

