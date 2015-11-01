#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int analyze(int Answer[] , int *P)
{
	int temp , j; 
	for(temp=1;temp<*P;temp++)
	{
		for(j=0;j<temp;j++)
		{
			if(Answer[j]==Answer[temp])
			{
				return 1;
			}
		}	
	}
	return 0;
}
int check(int Answer[] , int Guess[] ,int *P)
{
	int i , j , Right_Place = 0 , Right_Number = 0;
	for(i=0;i<*P;i++)
		{
			for(j=0;j<*P;j++)
			{
				if(Answer[j]==Guess[i])
				{
					Right_Number++;
					if(Answer[i]==Guess[i])
					{
						Right_Place++;
						Right_Number--;
					}
				}
			}
		}
	if(Right_Place!=*P)
	{
		printf("%dH %dX\n",Right_Place,Right_Number);
	}
	return Right_Place ;
}
int main(int argc , char *argv[])
{
	//int P=(int)*argv[1]-48 , N=(int)*argv[2]-48;
	int P=4 , N=9;
	if(P>N)
	{
		printf("The number of positions is no allow to be bigger than the number of integers!!");
		return 0;
	} 
	int Answer[P],i,j,w,Right_Place,Count,Guess[P],Bingo;
	srand(time(NULL));
	for(j=0;;j++)
	{
		for(i=0;i<P;i++)
		{
			Answer[i]=(rand()%N+1);
		}
		;
		if((w=analyze(&Answer[0],&P))==0)
		{
			break;
		}
	}
	for(i=0;i<P;i++)
	{
		printf("%d ",Answer[i]);
	}
	printf("\nPlease enter %d numbers you guess(1~%d)no repeat:\n",P,N);
	for(Count=0;;Count++)
	{
		for(j=0;;j++)
		{
			printf("The %d times guess:",(Count+1));
			for(i=0;i<P;i++)
			{
				scanf("%d",&Guess[i]);
			}
			
			if((w=analyze(&Guess[0],&P))==1)
			{
				printf("Error enter!!\n");
			}
			else
			{
				break;
			}
		}
		Bingo=check(&Answer[0],&Guess[0],&P);
		if(Bingo==P)
		{	
			printf("BINGO!!\n");
			break;
		}
	}
	return 0;
}
