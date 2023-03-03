#include<stdio.h>
float vyaj()
{
	float a,i,y,fi;
	
	printf("Enter Amount:");
	scanf("%f",&a);
	printf("Enter Intrest:");
	scanf("%f",&i);
	printf("Enter Year:");
	scanf("%f",&y);
	
	fi=a*i*y/100;
	printf("Final Intrest:%.2f",fi);
	//return fi;
}

void main()
{
	//float x=vyaj();
	//printf("Final Intrest:%.2f",x);
	vyaj();
}