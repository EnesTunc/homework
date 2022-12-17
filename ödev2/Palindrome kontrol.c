/*check Whether a Number is Palindrome or Not*/

#include <stdio.h>
#include <math.h>

int main()
{
	//tersi ile ayni olan sayi
	
	int sayi,x;
	int ters=0;
	int i=0;
	
	printf("Kontrol edilecek sayiyi girin:");
	scanf("%d",&sayi);

	int a=sayi;
	int y=sayi;
	
	while (sayi>0)
	{   
		sayi=sayi/10;
		i++;
	}
    while (a>0)
	{
		x=a%10;
		ters=ters+(x*pow(10,i-1));
		i=i-1;
		a=a/10;
	 } 
	if (ters==y)
	{
		printf("***Palindrome***");
	}
	 else
	 printf("***NOT Palindrome***");
}
