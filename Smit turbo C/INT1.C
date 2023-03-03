#include<stdio.h>
#include<conio.h>
void main()
{
	float a,a9=9,a2=2,a4=4,a12=12;
	float b,a123=123,a1=1,a63=63;
	float c,a11=11,a8=8;
	float d,a6=6,a76=76,a3=3;
	float e,f,a10=10,a27,a45=45,a5=5;
	float g,h,a30=30,a7=7;
	float i,a70=70,a55=55,a40=40;
	float j,a72=72,a31=31,a21=21 ;
	clrscr();
	a=a9*a4/a2+a12;
	printf("1.  9*4/2+12   =%f",a);

	b=a123/a1*2-a63;
	printf("\n2.  123/1*2-63 =%f",b);

	c=a11*a11-a8/a1;
	printf("\n3.  11*11-8/1  =%f",c);

	d=a8*a6+a76/a3;
	printf("\n4.  8*6+76/3   =%f",d);

	e=a10*a1+a27*a12;
	printf("\n5.  10*1+27*12 =%f",e);

	f=a6*a9+a45/a5;
	printf("\n6.  6*9+45*/5  =%f",f);

	g=a8+a30*a7/a6;
	printf("\n7.  8+30*7/6   =%f",g);

	h=a6*a2/a6*a12;
	printf("\n8.  6*2/6*12   =%f",h);

	i=a70-a55+a63-a40;
	printf("\n9.  70-55+63-40=%f",i);

	j=a21+a72/a31-a1;
	printf("\n10. 21+72/31-1 =%f",j);

	getch();
}