/*Klavyeden girilen N elemanli a ve b dizilerini toplayarak c dizisini oluþturma ve yazdýrma*/

#include <stdio.h>

int main()
{
	int i,N,a[N],b[N],c[N];
	
	printf("Dizinin eleman sayisini girin-->");
	scanf("%d",&N);
	
	printf("\n");
	
	for (i=0;i<N;i++)
	{
		printf("\na dizisinin %d. elemani girin-->",i+1);
		scanf("%d",&a[i]);
		
		printf("b dizisinin %d. elemani girin-->",i+1);
		scanf("%d",&b[i]);
		
		c[i]=a[i]+b[i];
	}
		for (i=0;i<N;i++)
	{
		printf("\nc dizisinin %d. elemani-->%d",i+1,c[i]);
    }
    
    return 0;
    
}
