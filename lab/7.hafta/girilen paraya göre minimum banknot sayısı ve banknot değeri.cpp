/*klavyeden girilen miktarı en az banknot oluşturduğumuzda içindeki 10-20-50-100lük banknot oranı--miktar 10'un katı olacak*/

#include <stdio.h>

int main()
{
	int para;
	int a;
	int b;
	int c;
	int d;
	
	printf("10'un kati olacak sekilde para miktarini girin:");
	scanf("%d",&para);
	
	a=para/100;
    para=para-100*a;
    b=para/50;
    para=para-50*b;
    c=para/20;
    para=para-20*c;
    d=para/10;
    printf("100luk banknot sayisi:%d",a);
    printf("\n50lik banknot sayisi:%d",b);
    printf("\n20lik banknot sayisi:%d",c);
    printf("\n10luk banknot sayisi:%d",d);
    printf("\nKullanilan minimum banknot sayisi:%d",a+b+c+d);
}
