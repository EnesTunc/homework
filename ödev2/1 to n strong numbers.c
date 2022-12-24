/* print all Strong numbers between 1 to n*/

#include <stdio.h>
#include <math.h>

int main()
{
	int sayi,faktoriyel=1;
	int i;
	int sum=0;
	int digit;
	
	printf("max limit sayiyi gir:");
	scanf("%d",&sayi);
	
	for (i=0;i<sayi;i++)
	{
		int x=i;
		int y=i;
		sum=0;
		
		while(x>0)
		{
	    digit=x%10;
	    x=x/10;
		
	    int faktoriyel=1;
        while (digit>0)  
	    {
		
        faktoriyel=faktoriyel*digit;
        digit=digit-1; }
        sum=sum+faktoriyel;
		}
	
        if (y==sum)
		{
    	printf("Strong numbers:%d\n",i);
	    }
	}
	return 0;
}
