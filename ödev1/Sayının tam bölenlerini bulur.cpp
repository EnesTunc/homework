/*print all numbers between LOW and HIGH that are divisible by NUMBER*/

#include_next <stdio.h>


int main()
{
	
   int sayi;
   
   printf("Sayi giriniz;",sayi);
   scanf("%d",&sayi);
   
   for(int i=1; i<=sayi; i++){
   	if(sayi%i==0){
   		printf("%d Tam boler\n",i);
   		
	   }
   }
   return 0;
}

