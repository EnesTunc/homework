/*Klavyden girilen N adet nokta çiftinden kaç  tanesinin (x-a)^2+(y-b)^2=r^2 dairesinin içinde,dýþýnda ve üzerinde olduðunu bulur*/

#include <stdio.h>
#include <math.h>

int main()
{
	int i,N,a,b,x[N],y[N],r;
	int uzerinde=0,disinda=0,icinde=0;
	
	printf("Nokta sayisini girin-->");
	scanf("%d",&N);
	
	printf("Dairenin yaricap degerini girin-->");
	scanf("%d",&r);
	
	printf("A noktasinin degerini girin-->");
	scanf("%d",&a);
	
	printf("B noktasinin degerini girin-->");
	scanf("%d",&b);
		
	for (i=0;i<N;i++)
	{
		printf("%d. x noktasini girin-->",i+1);
		scanf("%d",&x[i]);
		printf("%d. y noktasini girin-->",i+1);
		scanf("%d",&y[i]);
	}
	
	for (i=0;i<N;i++)
	{
		if (pow(r,2)==pow((x[i]-a),2)+pow((y[i]-b),2))
		{
			uzerinde++;
		}
		if (pow(r,2)>pow((x[i]-a),2)+pow((y[i]-b),2))
		{
			disinda++;
		}
		if (pow(r,2)<pow((x[i]-a),2)+pow((y[i]-b),2))
		{
			icinde++;
		}
	}
	printf("Uzerindeki nokta sayisi=%d\nDisindaki nokta sayisi=%d\nicindeki nokta sayisi=%d",uzerinde,disinda,icinde);
	
	return 0;
	
}
