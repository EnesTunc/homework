/*Print 1 to N*/

#include <stdio.h>


int print(int n) 
{
   if (n==1) 
   {  
      printf("%d-",n);
      
      return 0;
   }
   print(n-1);   
   printf("%d-",n);
}

int main() 
{
   int number;
   printf("Enter a number==>");
   scanf("%d",&number);
   
   print(number);
   
   return 0;
}

