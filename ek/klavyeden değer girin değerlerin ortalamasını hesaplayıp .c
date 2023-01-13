/*8 elemanlý float diziye klavyeden deðer girin. Girilen deðerlerin ortalamasýný hesaplayýp ekrana yazdýrýn*/


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
