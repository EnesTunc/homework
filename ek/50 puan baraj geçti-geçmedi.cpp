/*50 puan s�n�r�na g�re s�nav� ge�ip ge�ememek*/



#include_next <stdio.h>



int main(){
	
	
	int girilecekNot;
	printf("Ogrencinin notunu giriniz:");
	scanf("%d",&girilecekNot);
	
	
	if(girilecekNot>=50){
		printf("Bu ogrenci sinifi gecmistir");
	}
	else{
		printf("Bu ogrenci sinifi gecememistir");
	}
	
	
      return 0;
}
