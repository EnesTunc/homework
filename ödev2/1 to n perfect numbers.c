/* 1 to n perfect numbers*/


#include <stdio.h>

int main()
{
	int sum=0,i,a=1,sayi;
	
	printf("max limit sayiyi gir:");
	scanf("%d",&sayi);
	
	for (i=1;i<=sayi;i++)
	{
		int a=1;
		int sum=0;
		
		while (i!=a)
		{
		if (i%a==0)
		{
			sum=sum+a;
			a++;}
		else
		    a++;}
		if (sum==i)
		{
			printf("Perfect numbers:%d\n",i);
		}
	}
}
