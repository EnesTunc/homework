/*Reverse the number*/

#include <stdio.h>


int reverse(int n) 
{
    if (n==0) 
	{
        return;
    } 
	else 
	{
        printf("%d",n%10);
        reverse(n/10);
    }
}

int main() 
{
    int n;
    printf("Enter the number==>");
    scanf("%d",&n);
    
    printf("Reverse==> ");
    reverse(n);
    
    return 0;
}

