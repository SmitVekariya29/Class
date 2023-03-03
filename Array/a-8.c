	#include<stdio.h>
void main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j,k=0,l=0,m=0;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{	
			printf("%d ",a[i][j]);
			
			if(i==j)
			k+=a[i][j];
		
			else if(i<j)
			l+=a[i][j];
		
			else
			m+=a[i][j]; 	
		}
			printf("\n");
	}
		printf("\nDiogonal:%d",k);
		printf("\nUpper:%d",l);
		printf("\nLower:%d",m);
}
			