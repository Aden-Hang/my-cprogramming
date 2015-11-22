#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void quicksort(int a[],int low,int high)
{
	int middle;
	if(low>=high)
	{
		return ;
	}
	middle = split(a,low,high);
	quicksort(a,low,middle-1);
	quicksort(a,middle+1,high);
}

int split(int a[],int low,int high)
{
	int part_element=a[low];
	for(;;)
	{
		while(low<high && part_element<=a[high])
		{
			high--;
		}
		if(low>=high)
		{
			break;
		}
		a[low++]=a[high];
		while(low<high && a[low]<=part_element)
		{
			low++;
		}
		if(low>=high)
		{
			break;
		}
		a[high--]=a[low];
	}
	a[high]=part_element;
	return high;
}

int main(int argc , char *argv[])
{	
	srand(time(NULL));
	int N = 10 , D = 2;
	unsigned int i , a[N];
	float a1[N];	
	if(D==1)
	{	
		printf("------The numbers below is the origin-------\n");
		for(i=0;i<N;i++)
		{
			a[i]=rand()*3*189*7*9%10000000000;
			a1[i]=(float)a[i]*8/1000000;
			printf("%11f\n",a1[i]);
		}
		printf("-------The numbers below is after quicksort--------\n");
		quicksort(a,0,N-1);
		for(i=0;i<N;i++)
		{
			a1[i]=(float)a[i]*8/1000000;
			printf("%11f\n",a1[i]);
		}
	}
	else if(D==0)
	{	
		printf("------The numbers below is the origin-------\n");
		for(i=0;i<N;i++)
		{
			a[i]=(rand()%10000);
			printf("%d\n",a[i]);
		}
		quicksort(a,0,N-1);
		printf("-------The numbers below is after quicksort--------\n");
		for(i=0;i<N;i++)
		{
			printf("%d\n",a[i]);
		}
	}
	else
		printf("error enter");
	return 0;
}
