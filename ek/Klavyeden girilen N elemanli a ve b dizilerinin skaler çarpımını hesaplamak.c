/*Klavyeden girilen N elemanli a ve b dizilerinin skaler çarpýmýný hesaplamak*/

#include <stdio.h>

int main()
{
	int i,N,a[N],b[N],scaler=0;
	
	printf("Dizinin eleman sayisini girin-->");
	scanf("%d",&N);
	
	for (i=0;i<N;i++)
	{
		printf("\na dizisinin %d. elemani girin-->",i+1);
		scanf("%d",&a[i]);
		
		printf("b dizisinin %d. elemani girin-->",i+1);
		scanf("%d",&b[i]);
		
		scaler=a[i]*b[i]+scaler;
	}
	printf("\nDizilerin skaler carpimlari-->%d",scaler);
	
	return 0;
	
}
