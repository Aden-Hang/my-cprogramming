#include<stdlib.h>
#include<stdio.h>

int main()
{
	int i=1 , n , j=1 , k , p;
	scanf("%d",&n);
	if(n>2)
	{
		for(p=1;p<(n-1);p++)
		{
			k=i+j;
			i=j;
			j=k;
		}
	}
	else
	{
		k=1;
	}
	printf("%d!=%d",n,k);
	return 0;
	
}
