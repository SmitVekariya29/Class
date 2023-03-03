#include<stdio.h>
#include<conio.h>
void main()
{       float rate,qty,amt,dis,billamt,gst,netbill;
	clrscr();
	printf("Enter Amount = ");
	scanf("%f",&rate);
	printf("Enter Quantity = ");
	scanf("%f",&qty);
	amt=rate*qty;
	dis=(amt*5)/100;
	billamt=amt-dis;
	gst=rate+(18*rate)/100;
	netbill=billamt+gst;

	printf("Rate\t Qty\t Amt\t  Dis%5\t Billamt  GST18%  Netbill");
	printf("\n%.1f\t %.1f\t %.1f  %.1f\t %.1f   %.1f\t  %.1f ",rate,qty,amt,dis,billamt,gst,netbill);
	getch();
}