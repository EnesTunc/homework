/* find all the roots of a quadratic equation ax2+bx+c=0*/

#include <stdio.h>
#include <math.h>

int main()
{
	
	int a,b,c;
	float roots;

	printf("***ax^2+bx+c seklinde verilen 2.derecen denklemin kokunu bulma programi***\n\n");
	printf("ikinci dereceden denklemdeki a sayisini girin:");
	scanf("%d",&a);
	printf("\n\nikinci dereceden denklemdeki b sayisini girin:");
	scanf("%d",&b);
	printf("\n\nikinci dereceden denklemdeki c sayisini girin:");
	scanf("%d",&c);
	printf("\n\nGirdiginiz denklem:%dx^2+%dx+%d",a,b,c);
	
	float diskriminant=pow(b,2)-4*a*c;
	
	if (diskriminant<0)
	{
		printf("***Denkleminizin reel root'u yoktur***");
		
		return 0;
	}
	if (diskriminant==0)
	{
		roots=-b/2*a;
		printf("\n\nDenklemin root'u:%f",roots);
		
		return 0;
	}
	if (diskriminant>0)
	{
		roots=(-b+sqrt(diskriminant))/2;
		printf("\n\nDenklemin birinci root'u:%f",roots);
		roots=(-b-sqrt(diskriminant))/2;
		printf("\n\nDenklemin ikinci root'u:%f",roots);
	}
	
	return 0;
	
	
	
}
