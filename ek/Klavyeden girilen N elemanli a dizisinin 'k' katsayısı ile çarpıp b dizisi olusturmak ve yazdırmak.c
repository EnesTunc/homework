/*Klavyeden girilen N elemanli a dizisinin 'k' katsayýsý ile çarpýp b dizisi olusturmak ve yazdýrmak*/

#include <stdio.h>

int main()
{
	int i,N,a[N],b[N],k;
	
	printf("Dizinin eleman sayisini girin-->");
	scanf("%d",&N);
	
	printf("Yeni dizi icin 'k' sayisinin degerinin girin-->");
	scanf("%d",&k);
	
	printf("\n");
	
	for (i=0;i<N;i++)
	{
		printf("a dizisinin %d. elemani girin-->",i+1);
		scanf("%d",&a[i]);
		
		b[i]=k*a[i];
	}
	for (i=0;i<N;i++)
	{
		printf("\nb dizisinin %d. elemani-->%d",i+1,b[i]);
	}
	
	return 0;
	
}
