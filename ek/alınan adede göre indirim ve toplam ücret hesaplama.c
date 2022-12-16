#include <stdio.h>


int main()
{
	int kitapSayisi;
	float toplamUcret;
	
	
	printf("*****Online Kitapciya Hosgeldiniz*****\n");
	printf("\nBu programa ozel kampanya ile tum kitaplar esit fiyatta ve 8tl dir.\n");
	printf("\nAyrica toplu alimlarda %30'a varan indirimler mevcuttur\n");
	printf("\nindirim oranlari ilk 10 kitap alimi icin Yuzde10\n10 ile 20 kitap arasi Yuzde20\n20 ve 20den fazla alimlarda Yuzde30dur\n");
	
	printf("\nLutfen alacaginiz kitap adedini giriniz:");
	scanf("%d",&kitapSayisi);
	
	if (kitapSayisi>0 && kitapSayisi<=10)
	{
	    toplamUcret=kitapSayisi*8-(kitapSayisi*8*0.10);
		printf("Odemeniz gereken ucret %f tl'dir",toplamUcret);
	}
	if (kitapSayisi>10 && kitapSayisi<20)
	{
	    toplamUcret=kitapSayisi*8-(kitapSayisi*8*0.30);
		printf("Odemeniz gereken ucret %f tl'dir",toplamUcret);
	}
	if (kitapSayisi>=20)
	{
	    toplamUcret=kitapSayisi*8-(kitapSayisi*8*0.30);
		printf("Odemeniz gereken ucret %f tl'dir",toplamUcret);
	}
	return 0;
}
