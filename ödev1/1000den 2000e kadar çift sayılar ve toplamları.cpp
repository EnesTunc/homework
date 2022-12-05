/*even numbers between 1000 and 2000 and then prints them and also print total sum*/

#include <stdio.h>

int main()
{
	int i=1000;
	int sum=0;
	
	while (i<2002)
	{
			printf("%d\n",i);
		sum=sum+i;
		i=i+2;
	
	}
	printf("Sayilarin toplami:%d",sum);
	
}

