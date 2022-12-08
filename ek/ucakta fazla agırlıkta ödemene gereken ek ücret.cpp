/*FAZLA YÜK AÐIRLIÐINDA ek ücret hesaplama*/

#include <stdio.h>


int main()
{
	float bagaj,el;
	float ucret;
	printf("Bagaj agirligi:",bagaj);
	scanf("%f",&bagaj);
	
	printf("el cantasi agirligi:",el);
	scanf("%f",&el);
	
	ucret=float(bagaj-15+el-8)*5;
	printf("Ek odemen gereken:%f",ucret);
	
	return 0;
	
	
	
	
}
