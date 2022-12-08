/*Üçgenin alanýný bulur*/
#include_next <stdio.h>

int main(){
	
	float Taban;
	float Yukseklik;
	float Alan;
	
	printf("Lutfen ucgenin taban uzunlugunu giriniz;");
	scanf("%f",&Taban);
	
	printf("Lutfen ucgenin yuksekligini giriniz;");
	scanf("%f",&Yukseklik);
	
	Alan=Yukseklik*Taban/2;
	
	printf("ucgenin alaný;%f birim karedir",Alan);
	
	
	
}
