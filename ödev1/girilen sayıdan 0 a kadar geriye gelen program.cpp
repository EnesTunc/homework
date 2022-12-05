/*print all natural numbers in reverse (from n to 1)*/

#include <stdio.h>



int main()
{
	int sayi;
	
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	
	while (sayi>=0)
	{
		printf("%d\n",sayi);
		sayi=sayi-1;
		}
	}
