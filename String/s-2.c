#include<stdio.h>
void main()
{
	char s1[25], s2[25];
	int i=0,j=0;
		
	printf("Enter s1:");
	scanf("%[^\n]s",&s1);
	
	printf("Enter s2:");
	scanf("%s",&s2);
	
	while(s1[i]!='\0')
		++i;
	
	while(s2[j]!='\0')
	{
		s1[i]=s2[j];
		++i;
		++j;
	}
	s1[i]='\0';
	printf("\nSTRING:%s",s1);
}