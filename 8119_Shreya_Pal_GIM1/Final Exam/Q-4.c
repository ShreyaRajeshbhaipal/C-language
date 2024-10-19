#include<stdio.h>

main()
{
	int mark;
	
	printf("Enter your mark:");
	scanf("%d",&mark);
	
	if(mark>=90)
	{
		printf("\nGrade A");
	}
	
	else if(mark>=80)
	{
		printf("\nGrade B");	
	}
	
	else if(mark>=70)
	{
		printf("\nGrade C ");	
	}
	
	else if(mark>=60)
	{
		printf("\nGrade D");	
	}
	
	else if(mark>=40)
	{
		printf("\nGrade E ");	
	}
	
	else if(mark<40)
	{
		printf("\nYou are Fail..");	
	}
}
