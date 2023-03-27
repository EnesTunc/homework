/*1 to N even numbers*/

#include <stdio.h>


int print(int n)
{
    if(n==0)
    
        return;

    if(n%2==0)
    
        printf("%d*",n);
	    print(n-1);

}

int main()
{
    int n;
    printf("Enter a number=");
    scanf("%d",&n);
    
    printf("Even numbers between 1 and %d==>", n);
    print(n);
    
    return 0;
}

