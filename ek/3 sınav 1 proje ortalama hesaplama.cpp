/*3 sýnav ve 1 proje notundan ortalama bulmak*/

#include <stdio.h>


int main()
{
	int sinav1,sinav2,sinav3,proje;
	float ortalama;
	
    printf("ilk sinav notu;",sinav1);
	scanf("%d",&sinav1);
	
	printf("ikinci sinav notu;",sinav2);
	scanf("%d",&sinav2);
	
	printf("ucuncu sinav notu;",sinav3);
	scanf("%d",&sinav3);
	
	printf("proje notu;",proje);
	scanf("%d",&proje);
	
	ortalama=float(sinav1+sinav2+sinav3+proje)/4;
	printf("Ortalamasi;%f",ortalama);
	return 0;
	
	
	
	
}
