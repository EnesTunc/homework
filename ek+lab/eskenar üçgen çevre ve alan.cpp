/*Eþkenar üçgende alan ve çevre*/

#include <stdio.h>



int main()
{
	  float kenar;

	
	  printf("Eskenar ucgenin bir kenarini gir:",kenar);
	  scanf("%f",&kenar);
	  
	  	float cevre=3*kenar;
	    float alan=kenar*kenar/4*1.732;
	
	  
	   printf("Alani;%f\n",alan);
	   
	   printf("Cevresi;%f\n",cevre);
	   
	   return 0;
}
