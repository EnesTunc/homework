#include <stdio.h>

int main()
{
	char ogrencinumarasi[10];
	int vize;
	int final;
	int ortalama;
	
	printf("Ogrenci numaranizi giriniz:");
	scanf("%s",&ogrencinumarasi);
	
	printf("vize notunuzu giriniz:");
	scanf("%d",&vize);
	
	printf("final notunuzu giriniz:");
	scanf("%d",&final);
	
	ortalama=vize*0.40+final*0.60;
	printf("\n\nOgrenci numaraniz:%s\n",ogrencinumarasi);
	printf("Ortalamaniz:%d\n",ortalama);
	
	if (ortalama>=50)
	printf("Dersi %d ortalama ile gectiniz\n",ortalama);
	else 
	printf("Dersi %d ortalama ile gecemediniz",ortalama);
	
}
