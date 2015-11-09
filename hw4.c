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
	int N = (int)*argv[1] , D = (int)*argv[2];
	int i , a[N];
	float a1[N];
	
	if(D==1)
	{	
		
		for(i=0;i<N;i++)
		{
			a1[i]=(float)((rand()*3*8*7*2)%100000)/10;
		}
		quicksort(a1,0,N-1);
		for(i=0;i<N;i++)
		{
			printf("%12f\n",a1[i]);
		}
	}
	if(D==0)
	{	
		
		for(i=0;i<N;i++)
		{
			a[i]=(rand()%10000);
		}
		quicksort(a,0,N-1);
		for(i=0;i<N;i++)
		{
			printf("%d\n",a[i]);
		}
	}
	
	return 0;
}
