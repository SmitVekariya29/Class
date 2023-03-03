#include<stdio.h>

void main()
/*{
	char str[]="ABCDC";
	int  len=5;
	char first=str[0],s=str[1 ];
	char last=str[len-1],sl=str[len-2];
	
	
	
	printf("%c%c%c%c\n",first,last,s,sl	);
		
	
}*/

{
	char a[50];
	int i,j,c;
	
	printf("Enter:");
	gets(a);
	
	
	for(i=0; a[i]!='\0'; i++);
	{
		printf("lenth:%d\n",i);
	}
	c=i;
	for(j=0; j<(i/2); j++)	
	{
		printf("%c%c",a[j],a[--c]);
	}
	
	if(i%2!=0)
	{
		printf("%c",a[(i/2)]);
	}
}