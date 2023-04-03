/*Calculate the value of exponential number*/

#include <stdio.h>


float power(float base,int exponent)
{
    if(exponent==0)
	{
        return 1;
    }
    else if(exponent>0)
	{
        return base*power(base,exponent-1);
    }
    else
	{
        return 1/power(base,-exponent);
    }
}

int main()
{
    float base;
    int exponent;
    
    printf("Enter base number==> ");
    scanf("%f",&base);
    
    printf("\nEnter exponent \n(**Must be an integer**)==> ");
    scanf("%d",&exponent);
    
    printf("%f^%d = %f",base,exponent,power(base,exponent));
    
    return 0;
}

