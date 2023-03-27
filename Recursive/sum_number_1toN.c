/*Calculate the sum of the number 1 to N*/

#include <stdio.h>


int sum(int n) 
{
    if (n==0) 
	{
        return 0;
    } 
	else 
	{
        return n+sum(n-1);
    }
}

int main() 
{
    int n;
    printf("Enter the number to calculate 1 to N==> ");
    scanf("%d",&n);
    
    printf("\nSum of the numbers 1 to %d==>%d",n,sum(n));
    return 0;
}




