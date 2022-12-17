/* check whether a number is Strong number or not*/

#include <stdio.h>

int main()
{
	int sayi1,digit,faktoriyel=1,sayi2=0;
	
	printf("Kontrol edilecek sayiyi girin:");
	scanf("%d",&sayi1);
	
	int a=sayi1;
	
	while(sayi1>0){
	
	digit=sayi1%10;
	sayi1=sayi1/10;
	
    int faktoriyel=1;
      while (digit>0) {
     
 	faktoriyel=faktoriyel*digit;
    digit=digit-1; }
    sayi2=sayi2+faktoriyel;
     
     }
                  
    if (sayi2==a){
    	printf("it is a strong number");
    	return 0;
	}
     else 
	 printf("it is not a strong number");              
}
