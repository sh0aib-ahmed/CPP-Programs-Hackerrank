#include <conio.h>
#include <stdio.h>
int main()
{
	int x;
	char y;
	printf("WELCOME TO THE QUIZ \n INSTRUCTION : \n THIS QUIZ CONTAIN 5 QUESTIONS \n NO NEGATIVE MARKING \n BEST OF LUCK !!!");
	printf("\n ENTER 1 TO START AND 0 TO TERMINATE ");
	scanf("%d",&x);
	if(x==1)
	{
		printf("Q : Rajdhani of M.P is \n (a) Indore \t (b) Bhopal \n(c)Dhar \t (d) Ujjain \n");
	}
		else if(x==0) 
		printf("TERMINATED...");
	else
		printf("invalid answer" );
	printf("enter your answer");
	scanf("%c",&y);
		if(y=='b')
		{
			printf("Correct answer ");
			if(y=='a'||'c'||'d')
				printf("wrong answer ");
		}
	
	
	return 0;
}