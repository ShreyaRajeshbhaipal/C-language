#include<stdio.h>
#include<conio.h>

main()
{
	int mark;
	char Grade;
	clrscr();
	      printf("Enter your mark :");
	      scanf("%d",&mark);

	      if(mark>=91 && mark<=100)
	      {
		Grade = 'A';
	      }
	      else if(mark>=81 && mark<=90)
	      {
		Grade = 'B';
	      }
	      else if(mark>=71 && mark<=80)
	      {
		Grade = 'C';
	      }
	      else if (mark>=61 && mark<=70)
	      {
		Grade = 'D';
	      }

	      else if (mark>=51 && mark<=60)
	      {
		Grade = 'E';
	      }
	      else
	      {
		Grade = 'F';
	      }

     switch(Grade)
       {	case 'A':
		printf("Your Grade is A.\n Excellent work.");
		break;
	case 'B' :
		printf("Your Grade is B. \n Well Done.");
		break;
	case 'C':
		printf("Your Grade is C. \n Good job.");
		break;
	case 'D' :
		printf("Your Grade is D. \n You passed, but you could do better");
		break;
	case 'E' :
		printf("Your Grade is E. \n Sorry you faild!!");
		break;



	 }

	getch();
}