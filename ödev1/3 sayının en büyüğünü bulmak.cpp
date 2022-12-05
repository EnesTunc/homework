/*find the largest of three numbers A, B, and C*/

#include_next <stdio.h>


int main(){
	
	float A;
	float B;
	float C;
	
	printf("Sayi giriniz;",A);
	scanf("%f",&A);
	printf("Sayi giriniz;",B);
	scanf("%f",&B);
	printf("Sayi giriniz;",C);
	scanf("%f",&C);
	
	if (A>B){
		
		if (A>C)
	     printf("En buyuk;%f",A);
		 else  printf("En buyuk;%f",C);
	     }
    else if (B>C)
    
    printf("En buyuk;%f",B);
    
    else printf("En buyuk;%f",C);
	}
    

