#include<stdio.h>
#include<conio.h>

main()
{       int mark;

	clrscr();

	printf("Enter your mark :");
	scanf("%d",&mark);

	(mark >= 91 && mark<=100)
	  ? printf(" Your grade is A")
	  : (mark >=81 && mark<=90)
		?printf("Your grade is B")
		:(mark>=71 && mark<=80)
			?printf(" Your grade is C")
			:(mark >=61 && mark <= 70)
				?printf("Your grade is D")
				:(mark >=51 && mark<=60)
					?printf("Your grade is E")
					:(mark >=41 && mark <=50)
						?printf("Your grade is F")
						:(mark >=31 && mark<=40)
							?printf("You are pass")
							:printf("you are fail");







	getch();
  }

























}