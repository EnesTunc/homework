/*all perfect divisors*/

#include <stdio.h>


int divisors(int n, int divisor) 
{
    if (divisor>n) 
	{ 
        return;
    }
    if (n%divisor==0) 
	{ 
        printf("%d ",divisor);
    }
    divisors(n,divisor+1); 
}

int main() 
{
    int n;
    printf("Enter a number=");
    scanf("%d",&n);
    
    printf("All perfect divisors of %d",n);
    printf("\n\n");
    
    divisors(n,1); 
    printf("\n\n");
    
    return 0;
}

