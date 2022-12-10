/*display the n terms of harmonic series and their sum. (1 
+ 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms)*/

#include <stdio.h>


int main()
{
	
	float n;
	float i=1;
	float sum=0;
	
	printf("Sayi girin:");
	scanf("%f",&n);
	
	while (i<=n){
	  printf("%f\n",1/i);
	  sum=sum+1/i;
	  i=i+1;}

printf("Terimlerin toplami:%f",sum);  
	 
	  
	}
