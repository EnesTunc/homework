/*First 10 factors of a number*/

#include <stdio.h>


int factors(int n, int i)
{
    if(i>10)
	{ 
        return;
    }
    
    printf("%d*%d=%d\n",n,i,n*i);
    factors(n,i+1);
}

int main()
{
    int n;
    printf("Enter a number=");
    scanf("%d",&n);
    printf("\n");
    
    factors(n,1);
    
    return 0;
}

