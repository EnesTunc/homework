/*Program:Girilen say�n�n 5e e�it veya 5den b�y�k oldugunu bulmak*/
#include_next <stdio.h>



int main(){
	
	int sayi;
	printf("Sayi giriniz;");
	scanf("%d",&sayi);
	
	if (sayi>=5)
	printf("Sayi 5'e'esit veya 5ten buyuktur");
	

	else   
	printf("Sayi 5ten kucuktur");
	
	return 0;
}
   
