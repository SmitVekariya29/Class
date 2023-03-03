#include<stdio.h>
struct bill
{ int code,rate,qty;
  float amt,dis,billamt,gst,netbill;
  char name[10];
};
int main()
{ struct bill a[10];
  int i;

  for(i=0; i<1; i++)
  { printf("enter the product code = ");
    scanf("%d",&a[i].code);
     printf("enter the name = ");
    scanf("%s",&a[i].name);
     printf("enter the rate = ");
    scanf("%d",&a[i].rate);
     printf("enter the quantity = ");
    scanf("%d",&a[i].qty);
  }
 printf("code\t name\t rate\t qty\t amount\t\t dis\t\t bill\t\t gst\t\t netbill\n");
  for(i=0; i<1; i++)
  { a[i].amt=a[i].rate*a[i].qty;
    a[i].dis=a[i].amt*5/100;
    a[i].billamt=a[i].amt-a[i].dis;
    a[i].gst=a[i].billamt*18/100;
    a[i].netbill=a[i].billamt+a[i].gst;

    printf("%d\t %s\t %d\t %d\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f\t\n",a[i].code,a[i].name,a[i].rate,a[i].qty,a[i].amt,a[i].dis,a[i].billamt,a[i].gst,
       a[i].netbill);
  }
}



