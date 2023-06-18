#include<stdio.h>
int score;
void main()
{
	while(1)
	{
		printf("\n\n Enter your score: ");
		scanf("%d",&score);
		if(score >= 90 && score <=100)
		printf("\n Grade A");
		if(score >= 80 && score <=89)
		printf("\n Grade B+");
		if(score >= 70 && score <=79)
		printf("\n Grade B");
		if(score >= 60 && score <69)
		printf("\n Grade C+");
		if(score >= 50 && score <=59)
		printf("\n Grade C");
		if(score >= 40 && score <=49)
		printf("\n Grade D+");
		if(score >= 30 && score <=39)
		printf("\n Grade D");
		if(score <=29 && score >=0)
		printf("\n Grade F");
		
	}
}
