/* to count and print all numbers from  LOW to HIGH by steps of STEP.Step=5 0 to 100.*/

#include <stdio.h>

int main()
{
    int i=0;
	int count=0;
	
	while (i<=100)
	{
		printf("%d\n",i);
		i=i+5;
		count=count+1;
		}	
	printf("[0-100]arasi 5er 5er %d tane sayi vardir",count);
	 
	 return 0;
}

