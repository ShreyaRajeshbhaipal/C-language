#include<stdio.h>
#include<conio.h>

main()
{
	int guj,eng,ss,sci,sp;
	int Persantage;
	clrscr();

	printf("Enter your mark :");
	scanf("%d",&guj);

	printf("Enter your mark :");
	scanf("%d",&eng);

	printf("Enter your mark :");
	scanf("%d",&ss);

	printf("Enter your mark :");
	scanf("%d",&sci);

	printf("Enter your mark :");
	scanf("%d",&sp);

	Persantage = (guj+eng+ss+ss+sp) / 5;
	printf("Persantage :",Persantage);

	if(Persantage>=91 && Persantage<=100)
	{
		clrscr();
		printf("Grade\t : A+");
	}

	 else if (Persantage>=81 && Persantage<=90)
	{
		clrscr();
		printf("Grade\t : A");
	}

	  else if(Persantage>=71 && Persantage<=80)
	{
		clrscr();
		printf("Grade\t : B+");
	}

	    else if(Persantage>=61 && Persantage<=70)
	{
		clrscr();
		printf("Grade\t : B");
	}

	     else if(Persantage>=51 && Persantage<=60)
	{
		clrscr();
		printf("Grade\t : C+");
	}
	     else if(Persantage>=41 && Persantage<=50)
	{
		clrscr();
		printf("Grade\t : C");
	}
	 else if(Persantage>=33 && Persantage<=40)
	{
		clrscr();
		printf("Grade\t : D");
	}

	else
	{
	clrscr();
	printf("Oh No! You are fail!");
}


    getch();
}