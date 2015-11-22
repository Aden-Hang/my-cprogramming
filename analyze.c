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
