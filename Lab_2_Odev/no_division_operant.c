/*Calculate the result of the division without use division operant*/

#include <stdio.h>

int look(int dividend,int divisor)
{
	int x;
	
	while(dividend>divisor)
	{
		dividend=dividend-divisor;
		x++;
	}
	return x;
	
}

int main()
{ 
    int dividend,divisor;
    
    printf("Enter Dividend number==>");
    scanf("%d",&dividend);
    
    printf("Enter divisor number==>");
    scanf("%d",&divisor);
    
    int x=look(dividend,divisor);
    
    printf("Result is==>%d",x);
    
    return 0;
}

