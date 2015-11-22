#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include"analyze.c"
#include"test.c"

int array2[72][2],array3[504][3],array4[3024][4],array5[15120][5],array6[60480][6],array7[181440][7],array8[362880][8],array9[362880][9];
int Right_Number , Right_Place;

int check(int Answer[] , int Guess[] ,int *P)
{	int i , j ;
	Right_Place = 0,Right_Number = 0;
	for(i=0;i<*P;i++)
		{	for(j=0;j<*P;j++)
			{	if(Answer[j]==Guess[i])
				{	Right_Number++;
					if(Answer[i]==Guess[i])
					{Right_Place++;Right_Number--;}}}}
	if(Right_Place!=*P)
	{printf("%dH %dX\n",Right_Place,Right_Number);}
	return Right_Place ;
}
int compare2(int Guess[] , int *P , int *N )
{	int i , j , k , use;
	for(i=0;i<72;i++)
	{	int Right_Number2=0,Right_Place2=0;
		for(j=0;j<2;j++)
		{	for(k=0;k<2;k++)
			{	if(array2[i][k]==Guess[j])
				{	Right_Number2++;
					if(array2[i][k]==Guess[k])
					{Right_Place2++;Right_Number2--;}}}}
		if(Right_Number2!=Right_Number || Right_Place2!=Right_Place)
		{array2[i][0]=0;array2[i][1]=0;}}
	for(i=0;i<72;i++)
	{	if(array2[i][0]!=0 && array2[i][1]!=0)
		{	Guess[0]=array2[i][0];Guess[1]=array2[i][1];
			if(Guess[0]<=*N && Guess[1]<=*N)
			{use=Guess[0]*10+Guess[1];}}}	
	return use;
}
int compare3(int Guess[] , int *P , int *N )
{	int i , j , k , use;
	for(i=0;i<504;i++)
	{	int Right_Number2=0,Right_Place2=0;
		for(j=0;j<3;j++)
		{	for(k=0;k<3;k++)
			{	if(array3[i][k]==Guess[j])
				{	Right_Number2++;
					if(array3[i][k]==Guess[k])
					{Right_Place2++;Right_Number2--;}}}}
		if(Right_Number2!=Right_Number || Right_Place2!=Right_Place)
		{array3[i][0]=0;array3[i][1]=0;array3[i][2]=0;}}
	for(i=0;i<504;i++)
	{	if(array3[i][0]!=0 && array3[i][1]!=0)
		{	Guess[0]=array3[i][0];Guess[1]=array3[i][1];Guess[2]=array3[i][2];
			if(Guess[0]<=*N && Guess[1]<=*N )
			{if(Guess[2]<=*N){use=Guess[0]*100+Guess[1]*10+Guess[2];}}}}	
	return use;
}
int compare4(int Guess[] , int *P , int *N )
{	int i , j , k , use;
	for(i=0;i<3024;i++)
	{	int Right_Number2=0,Right_Place2=0;
		for(j=0;j<4;j++)
		{	for(k=0;k<4;k++)
			{	if(array4[i][k]==Guess[j])
				{	Right_Number2++;
					if(array4[i][k]==Guess[k])
					{Right_Place2++;Right_Number2--;}}}}
		if(Right_Number2!=Right_Number || Right_Place2!=Right_Place)
		{array4[i][0]=0;array4[i][1]=0;array4[i][2]=0;array4[i][3]=0;}}
	for(i=0;i<3024;i++)
	{	if(array4[i][0]!=0 && array4[i][1]!=0)
		{	Guess[0]=array4[i][0];Guess[1]=array4[i][1];Guess[2]=array4[i][2];Guess[3]=array4[i][3];
			if(Guess[0]<=*N && Guess[1]<=*N )
			{if(Guess[2]<=*N){if(Guess[3]<=*N){use=Guess[0]*1000+Guess[1]*100+Guess[2]*10+Guess[3];}}}}}	
	return use;
}
int compare5(int Guess[] , int *P , int *N )
{	int i , j , k , use;
	for(i=0;i<15120;i++)
	{	int Right_Number2=0,Right_Place2=0;
		for(j=0;j<5;j++)
		{	for(k=0;k<5;k++)
			{	if(array5[i][k]==Guess[j])
				{	Right_Number2++;
					if(array5[i][k]==Guess[k])
					{Right_Place2++;Right_Number2--;}}}}
		if(Right_Number2!=Right_Number || Right_Place2!=Right_Place)
		{array5[i][0]=0;array5[i][1]=0;array5[i][2]=0;}}
	for(i=0;i<15120;i++)
	{	if(array5[i][0]!=0 && array5[i][1]!=0)
		{	Guess[0]=array5[i][0];Guess[1]=array5[i][1];Guess[2]=array5[i][2];Guess[3]=array5[i][3];Guess[4]=array5[i][4];
			if(Guess[0]<=*N && Guess[1]<=*N )
			{if(Guess[2]<=*N){if(Guess[3]<=*N){if(Guess[4]<=*N){use=Guess[0]*10000+Guess[1]*1000+Guess[2]*100+Guess[3]*10+Guess[4];}}}}}}	
	return use;
}
int compare6(int Guess[] , int *P , int *N )
{	int i , j , k , use;
	for(i=0;i<60480;i++)
	{	int Right_Number2=0,Right_Place2=0;
		for(j=0;j<6;j++)
		{	for(k=0;k<6;k++)
			{	if(array6[i][k]==Guess[j])
				{	Right_Number2++;
					if(array6[i][k]==Guess[k])
					{Right_Place2++;Right_Number2--;}}}}
		if(Right_Number2!=Right_Number || Right_Place2!=Right_Place)
		{array6[i][0]=0;array6[i][1]=0;array6[i][2]=0;}}
	for(i=0;i<60480;i++)
	{	if(array6[i][0]!=0 && array6[i][1]!=0)
		{	Guess[0]=array6[i][0];Guess[1]=array6[i][1];Guess[2]=array6[i][2];Guess[3]=array6[i][3];Guess[4]=array6[i][4];Guess[5]=array6[i][5]; 
			if(Guess[0]<=*N && Guess[1]<=*N )
			{if(Guess[2]<=*N){if(Guess[3]<=*N){if(Guess[4]<=*N){if(Guess[5]<=*N){use=Guess[0]*100000+Guess[1]*10000+Guess[2]*1000+Guess[3]*100+Guess[4]*10+Guess[5];}}}}}}}	
	return use;
}
int compare7(int Guess[] , int *P , int *N )
{	int i , j , k , use;
	for(i=0;i<181440;i++)
	{	int Right_Number2=0,Right_Place2=0;
		for(j=0;j<7;j++)
		{	for(k=0;k<7;k++)
			{	if(array7[i][k]==Guess[j])
				{	Right_Number2++;
					if(array7[i][k]==Guess[k])
					{Right_Place2++;Right_Number2--;}}}}
		if(Right_Number2!=Right_Number || Right_Place2!=Right_Place)
		{array7[i][0]=0;array7[i][1]=0;array7[i][2]=0;}}
	for(i=0;i<181440;i++)
	{	if(array7[i][0]!=0 && array7[i][1]!=0)
		{	Guess[0]=array7[i][0];Guess[1]=array7[i][1];Guess[2]=array7[i][2];Guess[3]=array7[i][3];Guess[4]=array7[i][4];Guess[5]=array7[i][5];Guess[6]=array7[i][6]; 
			if(Guess[0]<=*N && Guess[1]<=*N )
			{if(Guess[2]<=*N){if(Guess[3]<=*N){if(Guess[4]<=*N){if(Guess[5]<=*N){if(Guess[6]<=*N){use=Guess[0]*1000000+Guess[1]*100000+Guess[2]*10000+Guess[3]*1000+Guess[4]*100+Guess[5]*10+Guess[6];}}}}}}}}	
	return use;
}
int compare8(int Guess[] , int *P , int *N )
{	int i , j , k , use;
	for(i=0;i<362880;i++)
	{	int Right_Number2=0,Right_Place2=0;
		for(j=0;j<8;j++)
		{	for(k=0;k<8;k++)
			{	if(array8[i][k]==Guess[j])
				{	Right_Number2++;
					if(array8[i][k]==Guess[k])
					{Right_Place2++;Right_Number2--;}}}}
		if(Right_Number2!=Right_Number || Right_Place2!=Right_Place)
		{array8[i][0]=0;array8[i][1]=0;array8[i][2]=0;}}
	for(i=0;i<362880;i++)
	{	if(array8[i][0]!=0 && array8[i][1]!=0)
		{	Guess[0]=array8[i][0];Guess[1]=array8[i][1];Guess[2]=array8[i][2];Guess[3]=array8[i][3];Guess[4]=array8[i][4];Guess[5]=array8[i][5];Guess[6]=array8[i][6];Guess[7]=array8[i][7]; 
			if(Guess[0]<=*N && Guess[1]<=*N )
			{if(Guess[2]<=*N){if(Guess[3]<=*N){if(Guess[4]<=*N){if(Guess[5]<=*N){if(Guess[6]<=*N){if(Guess[7]<=*N){use=Guess[0]*10000000+Guess[1]*1000000+Guess[2]*100000+Guess[3]*10000+Guess[4]*1000+Guess[5]*100+Guess[6]*10+Guess[7];}}}}}}}}}	
	return use;
}int compare9(int Guess[] , int *P , int *N )
{	int i , j , k , use;
	for(i=0;i<362880;i++)
	{	int Right_Number2=0,Right_Place2=0;
		for(j=0;j<9;j++)
		{	for(k=0;k<9;k++)
			{	if(array9[i][k]==Guess[j])
				{	Right_Number2++;
					if(array9[i][k]==Guess[k])
					{Right_Place2++;Right_Number2--;}}}}
		if(Right_Number2!=Right_Number || Right_Place2!=Right_Place)
		{array9[i][0]=0;array9[i][1]=0;array9[i][2]=0;}}
	for(i=0;i<362880;i++)
	{	if(array9[i][0]!=0 && array9[i][1]!=0)
		{	Guess[0]=array9[i][0];Guess[1]=array9[i][1];Guess[2]=array9[i][2];Guess[3]=array9[i][3];Guess[4]=array9[i][4];Guess[5]=array9[i][5];Guess[6]=array9[i][6];Guess[7]=array9[i][7];Guess[8]=array9[i][8]; 
			if(Guess[0]<=*N && Guess[1]<=*N )
			{if(Guess[2]<=*N){if(Guess[3]<=*N){if(Guess[4]<=*N){if(Guess[5]<=*N){if(Guess[6]<=*N){if(Guess[7]<=*N){if(Guess[8]<=*N){use=Guess[0]*100000000+Guess[1]*10000000+Guess[2]*1000000+Guess[3]*100000+Guess[4]*10000+Guess[5]*1000+Guess[6]*100+Guess[7]*10+Guess[8];}}}}}}}}}}	
	return use;
}
int main(int argc , char *argv[])
{	//int P=(int)*argv[2]-48 , N=(int)*argv[1]-48;
	int P=5 , N=9;
	if(P>N)
	{printf("The number of positions is no allow to be bigger than the number of integers!!");return 0;} 
	test(&P,&array2[0][0],&array3[0][0],&array4[0][0],&array5[0][0],&array6[0][0],&array7[0][0],&array8[0][0],&array9[0][0]);
	int Answer[P],i,j,w,Right_Place,Count,Guess[P],Bingo,guess2;
	srand(time(NULL));
	for(j=0;;j++)
	{	for(i=0;i<P;i++)
		{Answer[i]=(rand()%N+1);}
		if((w=analyze(&Answer[0],&P))==0)
		{break;}}
	for(i=0;i<P;i++)
	{	printf("%d ",Answer[i]);}
	printf("\n");printf("The 1 times guess:"); 
		for(j=0;;j++)
		{	for(i=0;i<P;i++)
			{	Guess[i]=(rand()%N+1);	}			
			if((w=analyze(&Guess[0],&P))==0)
			{break;}}
		for(i=0;i<P;i++)
		{printf("%d ",Guess[i]);}
		if(P==2)
		{	for(Count=0;;Count++)
			{	Bingo=check(&Answer[0],&Guess[0],&P);
				guess2=compare2(&Guess[0],&P,&N);
				if(Bingo==P)
				{printf("BINGO!!\n");break;}
				Guess[0]=guess2/10%10;Guess[1]=guess2%10;
				printf("The %d times guess:",Count+2);printf("%d %d ",Guess[0],Guess[1]);}}
		if(P==3)
		{	for(Count=0;;Count++)
			{	Bingo=check(&Answer[0],&Guess[0],&P);
				guess2=compare3(&Guess[0],&P,&N);
				if(Bingo==P)
				{printf("BINGO!!\n");break;}
				Guess[0]=guess2/100%10;Guess[1]=guess2/10%10;Guess[2]=guess2%10;
				printf("The %d times guess:",Count+2);printf("%d %d %d ",Guess[0],Guess[1],Guess[2]);}}	
		if(P==4)
		{	for(Count=0;;Count++)
			{	Bingo=check(&Answer[0],&Guess[0],&P);
				guess2=compare4(&Guess[0],&P,&N);
				if(Bingo==P)
				{printf("BINGO!!\n");break;}
				Guess[0]=guess2/1000%10;Guess[1]=guess2/100%10;Guess[2]=guess2/10%10;Guess[3]=guess2%10;				
				printf("The %d times guess:",Count+2);printf("%d %d %d %d ",Guess[0],Guess[1],Guess[2],Guess[3]);}}	
		if(P==5)
		{	for(Count=0;;Count++)
			{	Bingo=check(&Answer[0],&Guess[0],&P);
				guess2=compare5(&Guess[0],&P,&N);
				if(Bingo==P)
				{printf("BINGO!!\n");break;}
				Guess[0]=guess2/10000%10;Guess[1]=guess2/1000%10;Guess[2]=guess2/100%10;Guess[3]=guess2/10%10;Guess[4]=guess2%10;
				printf("The %d times guess:",Count+2);printf("%d %d %d %d %d ",Guess[0],Guess[1],Guess[2],Guess[3],Guess[4]);}}	
		if(P==6)
		{	for(Count=0;;Count++)
			{	Bingo=check(&Answer[0],&Guess[0],&P);
				guess2=compare6(&Guess[0],&P,&N);
				if(Bingo==P)
				{printf("BINGO!!\n");break;}
				Guess[0]=guess2/100000%10;Guess[1]=guess2/10000%10;Guess[2]=guess2/1000%10;Guess[3]=guess2/100%10;Guess[4]=guess2/10%10;Guess[5]=guess2%10;
				printf("The %d times guess:",Count+2);printf("%d %d %d %d %d %d ",Guess[0],Guess[1],Guess[2],Guess[3],Guess[4],Guess[5]);}}							
		if(P==7)
		{	for(Count=0;;Count++)
			{	Bingo=check(&Answer[0],&Guess[0],&P);
				guess2=compare7(&Guess[0],&P,&N);
				if(Bingo==P)
				{printf("BINGO!!\n");break;}
				Guess[0]=guess2/1000000%10;Guess[1]=guess2/100000%10;Guess[2]=guess2/10000%10;Guess[3]=guess2/1000%10;Guess[4]=guess2/100%10;Guess[5]=guess2/10%10;Guess[6]=guess2%10;
				printf("The %d times guess:",Count+2);printf("%d %d %d %d %d %d %d ",Guess[0],Guess[1],Guess[2],Guess[3],Guess[4],Guess[5],Guess[6]);}}
		if(P==8)
		{	for(Count=0;;Count++)
			{	Bingo=check(&Answer[0],&Guess[0],&P);
				guess2=compare8(&Guess[0],&P,&N);
				if(Bingo==P)
				{printf("BINGO!!\n");break;}
				Guess[0]=guess2/10000000%10;Guess[1]=guess2/1000000%10;Guess[2]=guess2/100000%10;Guess[3]=guess2/10000%10;Guess[4]=guess2/1000%10;Guess[5]=guess2/100%10;Guess[6]=guess2/10%10;Guess[7]=guess2%10;
				printf("The %d times guess:",Count+2);printf("%d %d %d %d %d %d %d %d ",Guess[0],Guess[1],Guess[2],Guess[3],Guess[4],Guess[5],Guess[6],Guess[7]);}}
		if(P==9)
		{	for(Count=0;;Count++)
			{	Bingo=check(&Answer[0],&Guess[0],&P);
				guess2=compare9(&Guess[0],&P,&N);
				if(Bingo==P)
				{printf("BINGO!!\n");break;}
				Guess[0]=guess2/100000000%10;Guess[1]=guess2/10000000%10;Guess[2]=guess2/1000000%10;Guess[3]=guess2/100000%10;Guess[4]=guess2/10000%10;Guess[5]=guess2/1000%10;Guess[6]=guess2/100%10;Guess[7]=guess2/10%10;Guess[8]=guess2%10;
				printf("The %d times guess:",Count+2);printf("%d %d %d %d %d %d %d %d %d ",Guess[0],Guess[1],Guess[2],Guess[3],Guess[4],Guess[5],Guess[6],Guess[7],Guess[8]);}}				
	return 0;
}
