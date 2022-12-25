/*find sum of all prime numbers between 1 to n*/

#include <stdio.h>

int main()
{
	int sum=0,i,a=1,sayi,sum2=0;
	
	printf("max limit sayiyi gir:");
	scanf("%d",&sayi);
	
	for (i=1;i<=sayi;i++)
	{
		int sum=0;
		int a=1;
		
	    while (i!=a)
		{
		if (i%a==0)
		{
			sum=sum+a;
			a++;}
		else
		    a++;}
		if (sum==1)
		{
			printf("Perfect numbers:%d\n",i);
			sum2=sum2+i;
		}
	}
	printf("Sum of all prime numbers between 1 to %d ===> %d",sayi,sum2);
}
