/*Klavyeden girilen N elemanli bir a dizisinintüm elemanlarinin toplami*/

#include <stdio.h>

int main()
{
	int i,N,a[N],toplam=0;
	
	printf("Dizinin eleman sayisini girin-->");
	scanf("%d",&N);
	
	printf("\n");
	
	for (i=0;i<N;i++)
	{
		printf("%d. elemani girin-->",i+1);
		scanf("%d",&a[i]);
		toplam=toplam+a[i];
	}
	printf("\nDizinin elemanlarinin toplami-->%d",toplam);
	
	return 0;
	
}
