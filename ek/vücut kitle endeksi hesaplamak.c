/*Vücut Kitle Ýndeksi Hesaplamak*/

#include <stdio.h>

int main()
{
	float boy,kilo,Vki;
	
	printf("Boyunuzu metre cinsinden girin==>");
	scanf("%f",&boy);
	
	printf("Kilonuzu kilogram cinsinden girin==>");
	scanf("%f",&kilo);
	
	Vki=kilo/(boy*boy);
	
	printf("Vki oraniniz==>%f\n",Vki);
	
	if (Vki<=18.5)
	{
		printf("Dusuk kilolu");
	}
	if (Vki>18.5 && Vki<25)
	{
		printf("Normal kilolu");
	}
	if (Vki>=25 && Vki<30)
	{
		printf("Fazla kilolu");
	}
	if (Vki>=30 && Vki<40)
	{
		printf("Obez");
	}
	if (Vki>=40)
	{
		printf("Asiri obez");
	}
}
