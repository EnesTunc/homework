/*8 elemanl� float diziye klavyeden de�er girin. Girilen de�erlerin ortalamas�n� hesaplay�p ekrana yazd�r�n*/


#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	float ortalama,a[7],toplam;
	
	for (i=0;i<8;i++)
	{
		printf("%d. float degeri girin=",i+1);
		scanf("%f",&a[i]);
		toplam=toplam+a[i];
	  
	}
        ortalama=toplam/8;
		printf("\nDizinin ortalamasi=%f",ortalama);
	return 0;
}
