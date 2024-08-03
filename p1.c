#include<stdio.h>
int main()
{
	
	
	
	
	int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;
	int point01,point02,point04,point05,point6,point7,point8,point9,point10;
	int pt1,pt2,pt3,pt4,pt5;
	int n,a,b,c;
	char d[30];
	
	
	
	
	
	printf("***************************** Welcom to Arjun class ****************************\n\n");
	
	
	
	printf("Enter Your First Name:\n");
	scanf("%s",&d);
	
	
	
	printf("***************************** Press 1 to Start The Test **********************\n\n");
	scanf("%d",&n);
	
	
	
	
	if(n==1)
	{
		printf("\n");
	
	
	printf("1. Who is the father of Computers?\n\n");
	printf("1) James Gosling		2) Charles Babbage		3) Dennis Ritchie		4) Bjarne Stroustrup\n\n");
	scanf("%d",&n);
	if(n==2)
	{
		printf("\n");
		p1=1;
		pt1=20;
	}
	else
	{
		printf("\n");
		p1=0;
		pt1=0;
	}
	
	
	
	
	
	
	printf("2. Which of the following is the correct abbreviation of COMPUTER?\n\n");
	printf("1.Commonly Occupied Machines Used in Technical and Educational Research\n");
	printf("2.Commonly Operated Machines Used in Technical and Environmental Research\n");
	printf("3.Commonly Oriented Machines Used in Technical and Educational Research\n");
	printf("4.Commonly Oriented Machines Used in Technical and Educational Research\n\n");
	scanf("%d",&n);
	if(n==4)
	{
		printf("\n");
		p2=1;
		pt2=20;
	}
	else
	{
		printf("\n");
		p2=0;
		pt2=0;
	}
	
	
	
	
	
	printf("3.What is the full form of CPU?\n\n");
	printf("1.Computer Processing Unit\n");
	printf("2.Central Processing Unit\n");
	printf("3.Central Procesing Unit\n");
	printf("4.Computer Procduce Unit\n\n");
	scanf("%d",&n);
	if(n==3)
	{
		printf("\n");
		p3=1;
		pt3=20;
	}
	else
	{
		printf("\n");
		p3=0;
		pt3=0;
	}
	
	
	
	
	
	printf("4.Which of the following is the brain of the computer?\n\n");
	printf("1.Central Processing Unit\n");
	printf("2.memory\n");
	printf("3.Arithmetic and Logic unit\n");
	printf("4.Control unit\n\n");
	scanf("%d",&n);
		if(n==1)
	{
		printf("\n");
		p4=1;
		pt4=20;
	}
	else
	{
		printf("\n");
		p4=0;
		pt4=0;
	}
	
	
	
	
	printf("5.Which of the following is the smallest unit of data in a computer?\n\n");
	printf("1.kb\n");
	printf("2.mb\n");
	printf("3.bit\n");
	printf("4.byte\n\n");
	scanf("%d",&n);
		if(n==3)
	{
		printf("\n");
		p5=1;
		pt5=20;
	}
	else
	{
		printf("\n");
		p5=0;
		pt5=0;
	}
	
	
	

	
	
	
	
	
	
    printf("Enter any number to view your result\n\n\n");
	scanf("%d",&n);
	
	
	printf("\n\n.-.-.---''-''-''-''-''-''-''-''-''--''-Your result.-._.-._.-._._.-.\n\n");
   printf("Name=%s\n\n",d);
   
   
        int sum	=p1+p2+p3+p4+p5;
	printf("Total correct:%d\n\n",sum);
	
	
	int point=pt1+pt2+pt3+pt4+pt5;
	printf("Total percentage:%d\n\n\n",point);
	
	
	
	
	printf("******************************************** THANKS ***************************************************");
}
	else
	{
		printf("invalid ");
	}
	return 0;
}