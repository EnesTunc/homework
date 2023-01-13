/*Bir sýnýftaki 10 öðrencinin boy ve kilo deðerlerini iki boyutlu diziye klavyeden okuyarak 
aktaran ve ortalama boy ve kilo deðerlerini hesaplayarak ekrana yazdýran programý C dili ile 
yazýnýz*/

#include <stdio.h>

int main()
{
	int i;
	float kilo,boy,a[9],ortkilo,ortboy,b[9],toplamkilo,toplamboy;
	
	for (i=0;i<10;i++)
	{
		printf("Siniftaki ogrencilerin cm cinsinden boylari-->");
		scanf("%f",&a[i]);
		toplamboy+=a[i];
	}
	ortboy=toplamboy/10;
	
	for (i=0;i<10;i++)
	{
		printf("Siniftaki ogrencilerin kg cinsinden kilo degerleri-->");
		scanf("%f",&b[i]);
		toplamkilo+=b[i];
	}
	ortkilo=toplamkilo/10;
	
	printf("\nSinifin ortalama boyu=%f\n",ortboy);
	printf("Sinifin ortalama kilosu=%f",ortkilo);
	
	return 0;
	
}
