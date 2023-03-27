/*Counts the number of the digits*/

#include <stdio.h>


int Digits(int n);

int main() 
{
    int n,digits;
    
    printf("Enter a number=");
    scanf("%d",&n);
    
    digits=Digits(n);
    
    printf("\nThe number %d is %d digit/digits\n",n,digits);
    
    return 0;
}

int Digits(int n) 
{
    if (n==0) 
	{
        return 0;
    } 
	else 
	{
        return 1+Digits(n/10);
    }
    return 0;
}

