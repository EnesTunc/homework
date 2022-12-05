/*computing factorial N (N!)*/

#include <stdio.h>



int main()
{
	int sayi;
	double faktoriyel=1;
	
	printf("Faktoriyelini bulmak istedigin sayi;",sayi);
	scanf("%d",&sayi);
	
 while (sayi>0) {
 	faktoriyel=faktoriyel*sayi;
sayi=sayi-1;     
	 
 }
	printf("Sayinin faktoriyeli;%f",faktoriyel);
	return 0;
}
