#include<stdio.h>

void add(int x, int y);
void sub(int x, int t);
void mul(int x, int y);
void div(int x, int y);
void mod(int x, int y);

int main()
{
	char choice;
	int n1,n2;
	int int_n1,int_n2;
	
	do
	{
		printf("\n-----Menu-----\n");
		printf("1 Addition (+)\n");
		printf("2 Subtraction (-)\n");
		printf("3 Multiplication (*)\n");
		printf("4 Division (/)\n");
		printf("5 Modulus (%)\n");
		printf("Press 0 for the exit\n");
		
		printf("Enter your choise:");
		
		choice = getchar();
		
		getchar();
		
		if(choice >= '1' && choice <= '5')
		{
			printf("Enter any number:");
			scanf("%d",&n1);
			
			if(choice == '5')
			{
				printf("Enter second number(interger):");
				scanf("%d",&n2);
				
				int_n1 = (int)n1;
			}
			
			else
			{
				printf("Enter second number:");
				scanf("%d",&n2);
			}
			
			switch (choice)
			{
				case'1':
					
					 add(n1,n2);
					 break;
					 
				case'2':
					
					 sub(n1,n2);
					 break;	
					  
				case'3':
					
					 mul(n1,n2);
					 break;
					 
				case'4':
					
					 div(n1,n2);
					 break;	
					 
				case'5':
					
					 mod(n1,n2);
					 break;	
				}
		
		}	else if (choice != '0')
			{
				printf("Invalid choise! Plese try again.\n");
			}
		}	while (choice != '0');
			
			printf("Program exiting.Bye");
			return 0;
			
			void add(int x,int y)
			{
				printf("Result: %d\n",x+y);
			}
			
			void sub(int x,int y)
			{
				printf("Result: %d\n",x-y);
			}
			
			void mul(int x,int y)
			{
				printf("Result: %d\n",x*y);
			}
			
			void div(int x,int y)
			{
				if(y!=0)
				{
				printf("Result: %d\n",x/y);
				}
				
				else{
					printf("Error: Division by zero!\n");
				}
			}
			
			void mod(int x,int y)
			{
				if(y!=0)
				{
				
				printf("Result: %d\n",x%y);}
				
				else{
					printf("Error: Division by zeroin modulus operation!\n");
				}
			}
			
			
			
			
}


