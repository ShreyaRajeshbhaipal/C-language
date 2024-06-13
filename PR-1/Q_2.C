#include<stdio.h>
#include<conio.h>

main()
{
	int Salary ;
	int HRA = 10;
	int DA = 5;
	int TA = 8;
       int  Gross_Salary;



	clrscr();

	printf("Enter the Value of Salary :");
	scanf("%d",&Salary);

	  Gross_Salary =Salary  + (Salary*HRA/100)+ (Salary * DA/100) + (Salary * TA/100);
	  printf("Gross_Salary\t : %d",Gross_Salary);

	printf("");








	getch();

}