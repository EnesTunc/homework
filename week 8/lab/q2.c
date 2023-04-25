#include <stdio.h>

int main() 
{
	struct x
	{
    int numara;
    char isim[30];
    char soyisim[30];
    int puan;
    }

    ogrenciler[30];
    int i;

    for (i=0;i<5;i++) 
	{
        printf("%d. ogrencinin numarasini girin==>",i+1);
        scanf("%d",&ogrenciler[i].numara);
        
        printf("%d.ogrencinin adini girin==>", i+1);
        scanf("%s",&ogrenciler[i].isim);
        
        printf("%d.ogrencinin soyismini girin==>",i+1);
        scanf("%s",&ogrenciler[i].soyisim);
        
        printf("%d.ogrencinin puanini girin==>",i+1);
        scanf("%d",&ogrenciler[i].puan);
        
        printf("\n\n");
    }
    printf("Ogrencilerin Bilgileri:\n");
    for (i=0;i<5;i++) 
	{
        printf("Numarasi==>%d\n",ogrenciler[i].numara);
        printf("ismi==>%s\n",ogrenciler[i].isim);
        printf("Soyismi==>%s\n",ogrenciler[i].soyisim);
        printf("Sinav Puani==>%d\n",ogrenciler[i].puan);
        printf("***\n");
    }
     return 0;
}

