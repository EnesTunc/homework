/*kullanýcýdan gitmek istedigi mesafenin uzaklýgý ve kaç saatte gitmek istedigini alýp hýzý hesaplama*/

#include <stdio.h>

int main()
{
	float mesafe,saat,hiz;
	
	printf("Gitmek istediginiz yeri kilometre cinsinden yazin:");
	scanf("%f",&mesafe);
	
	printf("Ne kadar sürede varmak istediginizi saat cinsinden yazin:")       ;
	scanf("%f",&saat);
	
	mesafe=1000*mesafe;
	saat=3600*saat;
	
	hiz=mesafe/saat;
	
	printf("\nGitmek istediginiz yere istediginiz surede varabilmek icin hiziniz ortalama %f m/sn olmalidir",hiz);
}
