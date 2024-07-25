#include<stdio.h>
#include<conio.h>

main()
{        int a=0,b=1,i,ans;
	clrscr();

	printf("Enter any number :");
	scanf("%d",&i);

	ans=("%d\t+%d\t",a,b);

	 for(a=0;a<=8;a++)
	 {
		ans=("%d\t+%d\t",a,b);
		printf("%d",ans);
		i++;
	 }



	getch();
}