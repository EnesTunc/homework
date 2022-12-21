/*check whether a number is Perfect number or not*/

#include <stdio.h>

int main()
{
	int sayi,i=2,sum=1;
	
	printf("Kontrol etmek istediginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	
	while (i<sayi)
	{
		if (sayi%i==0)
		{
			sum=sum+i;
			i++;
     	}
	    else 
		i++;
	}
	
	if (sayi==sum)
	{
		printf("***PERFECT NUMBER***");
	}
	else
	    printf("***IT IS NOT PERFECT NUMBER***");
}
