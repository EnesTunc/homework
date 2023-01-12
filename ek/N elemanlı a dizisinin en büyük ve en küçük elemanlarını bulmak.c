/*Klavyeden girilen N elemanlý a dizisinin en büyük ve en küçük elemanlarýný bulmak*/

#include <stdio.h>

int main()
{
	int i,N,a[N],EB,EK;
	
	printf("Dizinin eleman sayisi-->");
	scanf("%d",&N);
	
	printf("\n");
	
	for (i=0;i<N;i++)
	{
		printf("a dizisinin %d. elemanini girin==>",i+1);
		scanf("%d",&a[i]);
	}
	EB=a[0];
	EK=a[0];
	
	for (i=0;i<N;i++)
	{
		if (a[i]<EK)
		{
			EK=a[i];
		}
		if (a[i]>EB)
		{
			EB=a[i];
		}
	}
	printf("\nDizinin en buyuk elemani==>%d\n",EB);
	printf("Dizinin en kucuk elemani==>%d",EK);
	
	return 0;
	
}
