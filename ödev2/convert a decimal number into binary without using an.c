/*convert a decimal number into binary without using an array*/

#include <stdio.h>

int main()
{
	int sayi,i=0;
	int NewNumber,x;
	int c=0;
	
	printf("ikilik sisteme cevrilecek sayiyi gir==>");
	scanf("%d",&sayi);
	
	int a=sayi;
	int b=sayi;

	while (sayi>0)
	{
	sayi=sayi/2;
	i++;}
	
	if (b%2!=0)
	{
	  while (a>0)
	  {
		x=a%2;
		a/=2;
		printf("%d",x);
	  }  
    }
	
    if (b%2==0)
	{
	  while (a%2==0)
	  {a/=2;
		  }	
	  while (a>0)
	  {
		x=a%2;
		a/=2;
		printf("%d",x);
		c++;
	  } 
	  while (c<i)
	  {
	  	printf("0");
	  	c++;
	  }
    }
}

