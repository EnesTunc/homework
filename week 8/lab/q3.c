#include <stdio.h>


struct ogrenci {
    char isim[50];
    char soyisim[50];
    int boy;
    int kg;
    int puan;
};

int main() 
{
    int n,i;
    printf("Kac ogrenci bilgisi kaydedilecek==>");
    scanf("%d", &n);

 
    struct ogrenci*ogrenciler=(struct ogrenci*)malloc(n*sizeof(struct ogrenci));

    for(i=0;i<n;i++) 
    {
        printf("\n%d.ogrenci bilgilerini girin:\n\n",i+1);
        
        printf("isim==>");
        scanf("%s",ogrenciler[i].isim);
        
        printf("Soyisim==>");  
        scanf("%s",ogrenciler[i].soyisim);
        
        printf("boy==>");
        scanf("%d",&ogrenciler[i].boy);
        
        printf("kg==>");
        scanf("%d",&ogrenciler[i].kg);
        
        printf("puan==>");
        scanf("%d",&ogrenciler[i].puan);
    }

    printf("\n***Ogrenci bilgileri***\n");
    
    for(i=0;i<n;i++) 
	{
        printf("\n***%d.ogrenci***\n",i+1);
        printf("isim==>%s\n",ogrenciler[i].isim);
        printf("Soyisim==>%s\n",ogrenciler[i].soyisim);
        printf("boy==>%d\n",ogrenciler[i].boy);
        printf("kg==>%d\n",ogrenciler[i].kg);
        printf("puan==>%d\n",ogrenciler[i].puan);
        
    }
       
	return 0;
}

