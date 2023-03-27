/*Fibonacci_array*/

#include <stdio.h>


int fibonacci(int n)
{
    if (n==0) 
	{
        return 0;
    } 
	else if (n==1) 
	{
        return 1;
    } 
	else 
	{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main() 
{
    int n,i;
    printf("Enter the number of digits in the fibonacci array==> ");
    scanf("%d",&n);
    
    printf("Fibonacci ");
    
    for (i=0;i<n;i++) 
	{
        printf("\n%d",fibonacci(i));
    }
    return 0;
}

