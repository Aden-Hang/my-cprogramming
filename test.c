int test(int *P,int array2[][2],int array3[][3],int array4[][4],int array5[][5],int array6[][6],int array7[][7],int array8[][8],int array9[][9])
{
	int num , note, a , b , c , d , e , f , g , h , i;
	if(*P==2)
	{	num=12 ; 
		for(a=0;a<72;a++)
		{	note=0;
			array2[a][0]=num/10%10;
			array2[a][1]=num%10;
			num++;
			if(array2[a][0]==0||array2[a][1]==0)
			{a--;continue;}
			for(b=1;b<2;b++)
			{   for(c=0;c<b;c++)
				{	if(array2[a][b]==array2[a][c])
					{note=1;}}}
			if(note==1)
			{a--;continue;}}}
	if(*P==3)
	{	num=123;
		for(a=0;a<504;a++)
		{	note=0;
			array3[a][0]=num/100%10;
			array3[a][1]=num/10%10;
			array3[a][2]=num%10;
			num++;
			if(array3[a][0]==0||array3[a][1]==0||array3[a][2]==0)
			{a--;continue;}
			for(b=1;b<3;b++)
			{	for(c=0;c<b;c++)
				{	if(array3[a][b]==array3[a][c])
					{note=1;}}}
			if(note==1)
			{a--;continue;}}}
	if(*P==4)
	{	num=1234;
		for(a=0;a<3024;a++)
		{	note=0;
			array4[a][0]=num/1000%10;
			array4[a][1]=num/100%10;
			array4[a][2]=num/10%10;
			array4[a][3]=num%10;
			num++;
			if(array4[a][0]==0||array4[a][1]==0||array4[a][2]==0||array4[a][3]==0)
			{a--;continue;}
			for(b=1;b<4;b++)
			{	for(c=0;c<b;c++)
				{	if(array4[a][b]==array4[a][c])
					{note=1;}}}
			if(note==1)
			{a--;continue;}}}
	if(*P==5)
	{	num=12345;
		for(a=0;a<15120;a++)
		{	note=0;
			array5[a][0]=num/10000%10;
			array5[a][1]=num/1000%10;
			array5[a][2]=num/100%10;
			array5[a][3]=num/10%10;
			array5[a][4]=num%10;
			num++;
			if(array5[a][0]==0||array5[a][1]==0||array5[a][2]==0||array5[a][3]==0||array5[a][4]==0)
			{a--;continue;}
			for(b=1;b<5;b++)
			{	for(c=0;c<b;c++)
				{	if(array5[a][b]==array5[a][c])
					{note=1;}}}
			if(note==1)
			{a--;continue;}}}
	if(*P==6)
	{	num=123456;
		for(a=0;a<60480;a++)
		{	note=0;
			array6[a][0]=num/100000%10;
			array6[a][1]=num/10000%10;
			array6[a][2]=num/1000%10;
			array6[a][3]=num/100%10;
			array6[a][4]=num/10%10;
			array6[a][5]=num%10;
			num++;
			if(array6[a][0]==0||array6[a][1]==0||array6[a][2]==0||array6[a][3]==0||array6[a][4]==0||array6[a][5]==0)
			{a--;continue;}
			for(b=1;b<6;b++)
			{	for(c=0;c<b;c++)
				{	if(array6[a][b]==array6[a][c])
					{note=1;}}}
			if(note==1)
			{a--;continue;}}}
	if(*P==7)
	{	num=1234567;
		for(a=0;a<181440;a++)
		{	note=0;
			array7[a][0]=num/1000000%10;
			array7[a][1]=num/100000%10;
			array7[a][2]=num/10000%10;
			array7[a][3]=num/1000%10;
			array7[a][4]=num/100%10;
			array7[a][5]=num/10%10;
			array7[a][6]=num%10;
			num++;
			if(array7[a][0]==0||array7[a][1]==0||array7[a][2]==0||array7[a][3]==0||array7[a][4]==0||array7[a][5]==0||array7[a][6]==0)
			{a--;continue;}
			for(b=1;b<7;b++)
			{	for(c=0;c<b;c++)
				{	if(array7[a][b]==array7[a][c])
					{note=1;}}}
			if(note==1)
			{a--;continue;}}}
	if(*P==8)
	{	num=12345678;
		for(a=0;a<362880;a++)
		{	note=0;
			array8[a][0]=num/10000000%10;
			array8[a][1]=num/1000000%10;
			array8[a][2]=num/100000%10;
			array8[a][3]=num/10000%10;
			array8[a][4]=num/1000%10;
			array8[a][5]=num/100%10;
			array8[a][6]=num/10%10;
			array8[a][7]=num%10;
			num++;
			if(array8[a][0]==0||array8[a][1]==0||array8[a][2]==0||array8[a][3]==0||array8[a][4]==0||array8[a][5]==0||array8[a][6]==0||array8[a][7]==0)
			{a--;continue;}
			for(b=1;b<8;b++)
			{	for(c=0;c<b;c++)
				{	if(array8[a][b]==array8[a][c])
					{note=1;}}}
			if(note==1)
			{a--;continue;}}}
	if(*P==9)
	{	num=123456789;
		for(a=0;a<362880;a++)
		{	note=0;
			array9[a][0]=num/100000000%10;
			array9[a][1]=num/10000000%10;
			array9[a][2]=num/1000000%10;
			array9[a][3]=num/100000%10;
			array9[a][4]=num/10000%10;
			array9[a][5]=num/1000%10;
			array9[a][6]=num/100%10;
			array9[a][7]=num/10%10;
			array9[a][8]=num%10;
			num++;
			if(array9[a][0]==0||array9[a][1]==0||array9[a][2]==0||array9[a][3]==0||array9[a][4]==0||array9[a][5]==0||array9[a][6]==0||array9[a][7]==0||array9[a][8]==0)
			{a--;continue;}
			for(b=1;b<9;b++)
			{	for(c=0;c<b;c++)
				{	if(array9[a][b]==array9[a][c])
					{note=1;}}}
			if(note==1)
			{a--;continue;}}}
	return 0;
}
