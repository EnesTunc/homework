/*N kiþilik bir sýnýfýn herhangi bir dersten yýlsonu notlarý giriliyor buna göre sýnýf ortalamasýnýn altýnda kalanlara 'KALDI'
diðerlerinde 'GEÇTÝ'yazan program*/


#include <stdio.h>
#include <math.h>

int main()
{
	int i,N,a[N],toplam=0;
	float ortalama;
	
	printf("Siniftaki ogrenci sayisini girin=");
	scanf("%d",&N);
	
	for (i=0;i<N;i++)
	{
		printf("%d. ogrencinin sinav notu==>",i+1);
		scanf("%d",&a[i]);
		toplam=toplam+a[i];
		ortalama=toplam/N;	
	}
	
	for (i=0;i<N;i++)
	{
		if (a[i]>=ortalama)
		{
			printf("Gecen ogrenciler %d.ogrenci ve notlari-->%d\n",i+1,a[i]);
		}
		if (a[i]<ortalama)
		{
			printf("Kalan ogrenciler %d.ogrenci ve notlari-->%d\n",i+1,a[i]);
		}
	}
	return 0;
}
