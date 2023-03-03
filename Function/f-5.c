#include<stdio.h>
int add()
{
	int r,q,A,dis,bill,gst,netbill;
	
	
	printf("Enter Rate:");
	scanf("%d",&r);
	
	printf("Enter Quantity:");
	scanf("%d",&q);
	
	A=r*q;
	dis=A*5/100;
	bill=A-dis;
	gst=r+(r*18/100);
	netbill=bill+gst;
	
	printf("\nRate\t Qnt.\t Amt.\t Dis.\t Bill\t GST.\t Net.\t");
	printf("\n%d\t %d\t %d\t %d\t %d\t %d\t %d\t",r,q,A,dis,bill,gst,netbill);
}
void main()
{
	add();
}