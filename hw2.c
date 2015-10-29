#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(int argc , char *argv[])
{
	
	int P=(int)*argv[1]-48 , N=(int)*argv[2]-48;
	if(P>N)
	{
		printf("The number of positions is no allow to be bigger than the number of integers!!");
		return 0;
	} 
	int Answer[P],i,j,q=1,w=0,Right_Number=0,Right_Place=0,Count,temp,Guess[P];
	srand(time(NULL));
	for(j=0;;j++)
	{
		w=0;
		for(i=0;i<P;i++)
		{
			Answer[i]=(rand()%N+1);
		}
		for(temp=1;temp<P;temp++)
		{
			for(j=0;j<temp;j++)
			{
				if(Answer[j]==Answer[temp])
				{
					i=temp;
					w=1;
				}
			}
		}
		if(w==1)
		{
			continue;
		}
		else
		{
			break;
		}
	}
	for(i=0;i<P;i++)
	{
		printf("%d ",Answer[i]);
	}
	printf("\n");
	printf("Please enter %d numbers you guess(1~%d)no repeat:\n",P,N);
	for(Count=0;;Count++)
	{
		for(j=0;;j++)
		{
			w=0;
			printf("The %d times guess:",(Count+1));
			for(i=0;i<P;i++)
			{
				scanf("%d",&Guess[i]);
			}
			for(temp=1;temp<P;temp++)
			{
				for(j=0;j<temp;j++)
				{
					if(Guess[j]==Guess[temp])
					{
						i=temp;
						w=1;
					}
				}
			}
			if(w==1)
			{
				printf("Error enter!!\n");
				continue;
			}
			else
			{
				break;
			}
		}
		for(i=0;i<P;i++)
		{
			for(j=0;j<P;j++)
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
		if(Right_Place==P)
		{	
			printf("BINGO!!\n");
			break;
		}
		printf("%dH %dX\n",Right_Place,Right_Number);
		Right_Place=0;
		Right_Number=0;
	}
	return 0;
}
