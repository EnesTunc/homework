/*check whether a number is Armstrong number or not*/

#include <stdio.h>
#include <math.h>

int main()
{
	int sayi1;
	int i=0;
	int sum=0;
	int digits;
	
	printf("Kontrol etmek istedigin sayiyi gir:");
	scanf("%d",&sayi1);
	
	int x=sayi1;
	int y=sayi1;
	
	while (sayi1>0)
	{
	  sayi1=sayi1/10;
	  i=i+1;
	}
	
	while (x>0)
	{
		digits=x%10;
		sum=sum+pow(digits,i);
		x=x/10;
	 } 
	 
	 	 
	 if (y==sum)
	  printf("Armstrong sayisidir");
     else 
     printf("Armstrong sayisi degildir");
	 
	  
}
