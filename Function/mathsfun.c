#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	printf("\nceil:%.2f",ceil(4.1));
	printf("\nceil:%.2f\n",ceil(4.6));
	
	printf("\nfloor:%.2f",floor(5.1));
	printf("\nfloor:%.2f\n",floor(5.6));
	
	printf("\nround:%.2f",round(9.1));
	printf("\nround:%.2f\n",round(9.6));
	
	printf("\npower:%f",pow(2,5));
	printf("\npower:%.2f\n",pow(4,5));
	
	printf("\nsqare root:%.2f",sqrt(45));
	printf("\nsqare root:%.2f\n",sqrt(196));
	
	printf("\nabs:%d",abs(-4));
	printf("\nabs:%d\n",abs(1114));
	
	printf("\nrandom:%d",rand()%15);
	printf("\nrandom:%d\n",rand()%3);
}