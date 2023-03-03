#include<stdio.h>
void main()
{
	char s[50],r[50];
	int i,j,k=0;
	
	printf("Enter value:");
	scanf("%[^\n]s",s);
		
	for(k=0; s[k]!='\0'; k++);
	{
		j=k-1;
	}
	
	for(i=0; i<k; i++)
	{
		r[i]=s[j];
		j--;
	}
	r[i]='\0';
	printf("\nreverse:%s",r);
}