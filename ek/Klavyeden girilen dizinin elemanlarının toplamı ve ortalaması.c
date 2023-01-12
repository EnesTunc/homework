/*Klavyeden girilen dizinin elemanlarýnýn toplamý ve ortalamasý*/

#include <stdio.h>

int main()
{
	int dizi[500];
	int i,toplam=0,sayi;
	float ortalama=0;
	
	printf("Dizinin eleman sayisini girin==>");
	scanf("%d",&sayi);
	
	for (i=0;i<sayi;i++)
	{
		printf("%d. elemani girin==>",i+1);
		scanf("%d",&dizi[i]);
	}
	
	for (i=0;i<sayi;i++)
	{
		toplam=toplam+dizi[i];
	}
	printf("Dizideki elemanlarin toplami==>%d\n",toplam);
	
	    ortalama=toplam/sayi;
	    
	printf("Dizideki elemanlarin ortalamasi==>%f",ortalama);
}
