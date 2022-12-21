/*find the sum of the series 1 +11 + 111 + 1111 + .. n terms*/

#include <stdio.h>



int main()
{

   int sum=0,numbers=0;
   int i=1,a=0,b=0,n;
   
   printf("Terim sayisini girin:");
   scanf("%d",&n);
   
   if (n==1)
   {
   	printf("Terimlerin toplami:1'dir.");
   	
   	return 0;
   }
   
   while (i<n)
   {
        while (a<n)
        {
        	numbers=numbers+pow(10,a);
        	a++;
        	i++;
        	sum=sum+numbers;
        	printf("Terimler: %d\n",numbers);
		}
   }
   
   printf("Dizideki terimlerin toplami:%d",sum);
   
   
}
