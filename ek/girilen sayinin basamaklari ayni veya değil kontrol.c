/*Girilen sayýnýn basamaklarini kontrol etmek*/

#include <stdio.h>

int main()
{
	
	int sayi;
	int digit;
	int i=0,a=0;	
	printf("Kontrol edilecek sayiyi girin:");
	scanf("%d",&sayi);
	
	while (sayi>a){
	
    digit=sayi%10;
    sayi=sayi/10;
    a=sayi%10;
    
      if (digit!=a){
      printf("Basamaklar esit degil!!!!");
       return 0;}
    
    }
    
      printf("Tum basamaklar esit");
    
   
    
}
