/* count number of digits in a number*/

#include <stdio.h>


int main()
{
	int basamaksayisi=0;
	int sayi;
	
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	
	while (sayi>0)	
	{
	    sayi=sayi/10;
		basamaksayisi=basamaksayisi+1;
		}
		
		
    printf("Sayinin basamak sayisi:%d",basamaksayisi);
    return 0;
}
