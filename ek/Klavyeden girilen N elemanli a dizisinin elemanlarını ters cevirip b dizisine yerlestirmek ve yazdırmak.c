/*Klavyeden girilen N elemanli a dizisinin elemanlarýný ters cevirip b dizisine yerlestirmek ve yazdýrmak*/

#include <stdio.h>

int main()
{
	int i,N,a[N],b[N],j,x;
	
	printf("Dizinin eleman sayisini girin-->");
	scanf("%d",&N);
	x=N;
	
	printf("\n");
	
	for (i=0;i<N;i++)
	{
		printf("a dizisinin %d. elemani girin-->",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0,j=N-1;i<N,j>=0;i++,j--)
	{
		b[j]=a[i];
		printf("\nb dizisinin %d. elemani-->%d",x,b[j]);
		x--;
	}
	return 0;
	
}
