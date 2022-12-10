/*find the number and sum of all integer between 100 and 
200 which are divisible by 9.*/

#include <stdio.h>

int main()
{
	int i=9;
	int sayi=100;
	int sum=0;
	
	while (sayi<=200){
	 
	 if(sayi%i==0){
	 	printf("%d\n",sayi);
	 	sum=sum+sayi;
	     sayi=sayi+1;}
	     
	      else 
	   sayi=sayi+1;
}
    printf("sayilarin toplamÝ:%d",sum);
    

}
