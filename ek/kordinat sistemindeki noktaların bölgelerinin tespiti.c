/*Klavyden girilen N adet nokta çiftinden (x ve y ler 0dan farklý)kaç tanesinin kartezyen kordinat sisteminin birinci 
bölgesinde,kaç tanesinin ikinci bölgesinde,kaç tanesinin üçüncü bölgesinde ve kaç tanesinin dördüncü bölgesinde olduðunu
bulan program*/

#include <stdio.h>

int main()
{
	int i,N,x[N],y[N];
	int bolge1=0,bolge2=0,bolge3=0,bolge4=0;
	
	printf("Dizinin eleman sayisini girin-->");
	scanf("%d",&N);
	
	for (i=0;i<N;i++)
	{
		printf("0 dan farkli %d. x degerini giriniz-->",i+1);
		scanf("%d",&x[i]);
		
		printf("0 dan farkli %d. y degerini giriniz-->",i+1);
		scanf("%d",&y[i]);
	}
	printf("\n");
	for (i=0;i<N;i++)
	{
		if (x[i]>0 && y[i]>0)
		{
			bolge1++;
		}
		if (x[i]>0 && y[i]<0)
		{
			bolge4++;
		}
		if (x[i]<0 && y[i]>0)
		{
			bolge2++;
		}
		if (x[i]<0 && y[i]<0)
		{
			bolge3++;
		}
	}
	printf("1. bolgedeki nokta sayisi=%d\n",bolge1);
	printf("2. bolgedeki nokta sayisi=%d\n",bolge2);
	printf("3. bolgedeki nokta sayisi=%d\n",bolge3);
	printf("4. bolgedeki nokta sayisi=%d",bolge4);
	
	return 0;
}
