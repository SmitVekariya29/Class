#include<stdio.h>
struct bill
{
	float code, rate, qut, amt, billamt, netbill,dis,gst;
	char name[50];
	
};

int main()
{
	struct bill a[10];
	int i;
	for(i=0; i<1; i++)
	{
		printf("Enter Product Code:");
		scanf("%.2f",&a[i].code);
		
		printf("Enter Product Name:");
		scanf("%s",&a[i].name);
		
		printf("Enter Product Rate:");
		scanf("%.2f",&a[i].rate);
		
		printf("Enter Product Quantity:");
		scanf("%.2f",&a[i].qut);
	}
	
	for(i=0; i<1; i++)
	{
		a[i].amt= a[i].rate * a[i].qut;
		a[i].dis = a[i].amt *5/100;
		a[i].billamt= a[i].amt - a[i].dis;
		a[i].gst =  (18*a[i].rate)/100;
		a[i].netbill= a[i].billamt + a[i].gst;
		
		printf("%.2f\t %s\t  %.2f\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f\t\n",&a[i].code ,&a[i].name ,&a[i].rate ,&a[i].qut ,a[i].amt ,a[i].dis ,a[i].billamt  ,a[i].gst ,a[i].netbill);
	}
}