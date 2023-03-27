/*1 to N  all numbers divisible by 9 and sum of them*/

#include <stdio.h>


int sum(int n);

int print(int n)
{
    if(n==0)
    {
        return;
    }
    
    if(n%9==0)
    {
        printf("%d  ",n);
    }
    
    print(n-1);
}

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    
    if(n%9==0)
    {
        return n+sum(n-1);
    }
    
    return sum(n-1);
}

int main()
{
    int n;
    
    printf("Enter a number=");
    scanf("%d",&n);
    
    printf("Multiples of nine==>");
    
    print(n);
    
    printf("\n");
    
    int Sum=sum(n);
    
    printf("Sum of the multiples of nine==>%d\n",Sum);
    
    return 0;
}

