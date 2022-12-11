/*karede alan ve cevre*/

#include <stdio.h>

int main()
{
	float kenar,alan,cevre;
	
	printf("Karenin bir kenarini girin: ");
	scanf("%f",&kenar);
	
	alan=kenar*kenar;
	cevre=4*kenar;
	
	printf("Karenin alani: %f",alan);
	
	printf("\nKarenin cevresi:%f",cevre);
	
	return 0;
}
