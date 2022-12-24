/* print all Armstrong numbers between 1 to n*/

#include <stdio.h>
#include <math.h>

int main()
{
	int sayi1,a;
	int i;
	int sum;
	int digits;
	
	printf("max limit sayiyi gir:");
	scanf("%d",&sayi1);
	
	for (i=0;i<sayi1;i++)
	{
		int b=i;
		int c=i;
		int a=0;
		int sum=0;
		while(b>0)
		{
			b=b/10;
			a++;
		}
		while (c>0)
	    {
		digits=c%10;
		sum=sum+pow(digits,a);
		c=c/10;
	    } 
	    
	    if (i==sum)
	    {
	    	printf("Amstrong sayilar:%d\n",i);
		}
	}
	return 0;
}
