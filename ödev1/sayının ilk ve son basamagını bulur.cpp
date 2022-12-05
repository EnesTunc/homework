/*find first and last digit of a number*/

#include <stdio.h>


int main()
{
	int lastdigit;
	int firstdigit;
	int sayi;
	
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	
	lastdigit=sayi%10;
	printf("Last digit:%d\n",lastdigit);
	
	if (sayi>0){
		while (sayi>10)
	sayi=sayi/10;
	firstdigit=sayi;
	}
	  	printf("First digit:%d",firstdigit);	
}
