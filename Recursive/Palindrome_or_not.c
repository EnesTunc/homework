/*Palindrome number or not*/

#include <stdio.h>


int palindrome(int number,int reverse) 
{
    if (number==0) 
	{  
        return reverse;  
    } 
	else 
	{
        int digit;
        digit=number%10; 
        reverse=reverse*10+digit; 
        
        return palindrome(number/10,reverse);
    }
}

int main() 
{
    int number;
    int reverse=0;

    printf("Enter a number to check=");
    scanf("%d",&number);

    if (palindrome(number,reverse)==number) 
	{ 
        printf("%d is a palindrome number\n",number);
    } 
	else 
	{  
        printf("%d is not a palindrome number\n",number);
    }

    return 0;
}

