#include <stdio.h>
#define SIZE 5

int main()
{
	
	int sayi,i,a[SIZE];
	
	printf("En fazla 5 basamakli sayi giriniz:");
	scanf("%d",&sayi);
	
	if (sayi>99999 || sayi<1)
	{
		printf("bu sayi bu programda kontrol edilemez");
		return 0;
	}
	
	for (i=0;i<SIZE;i++)
	{
		a[i]=sayi%10;
		sayi=sayi/10;
		printf("Sayinin basamaklari:%d\n",a[i]);
	}
}
