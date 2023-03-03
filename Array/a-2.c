#include<stdio.h>
void main()
{
	int M[5],S[5],E[5];
	int i,t,g;
	float p;
	
	for(i=0; i<5; i++)
	{
		printf("Maths: ");
		scanf("%d",&M[i]);
	}
	 	
	for(i=0; i<5; i++)
	{
		printf("Science: ");
		scanf("%d",&S[i]);
	}
	
	for(i=0; i<5; i++)
	{
		printf("English: ");
		scanf("%d",&E[i]);
	}
	
		printf("\nMaths \tSci. \tEng. \tTotal \tPer. \tGrade ");
		
	for(i=0; i<5; i++)
	{
		t=M[i]+S[i]+E[i];
		p=(float)t/3;
			printf("\n%d \t%d \t%d \t%d \t%.2f ",M[i],S[i],E[i],t,p);

		if(M[i]<36 || S[i]<36 || E[i]<36)
		{
			printf("\tFAIL");
		}
		else if(p>90)
		{
			printf("\tA");
		}
		else if(p>=70 && p<90)
		{
			printf("\tB");
		}
		else if(p>=36 && p<70)
		{
			printf("\tC");
		}		
		else
		{
			printf("\tD");
		}
		
		
	}
}