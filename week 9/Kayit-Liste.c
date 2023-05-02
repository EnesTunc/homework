#include <stdlib.h>
#include <string.h>

struct ogrenci 
{
    int numara;
    char ad[50];
    float vize;
    float final;
};

void Kayit(struct ogrenci *ogrenciler,int *ogrenciSayisi) 
{
    printf("\n*** YENI KAYIT EKLE ***\n");

    printf("Numara:");
    scanf("%d",&ogrenciler[*ogrenciSayisi].numara);

    printf("Ad:");
    scanf("%s",ogrenciler[*ogrenciSayisi].ad);

    printf("Vize:");
    scanf("%f",&ogrenciler[*ogrenciSayisi].vize);

    printf("Final:");
    scanf("%f",&ogrenciler[*ogrenciSayisi].final);

    (*ogrenciSayisi)++;
}

void Liste(struct ogrenci*ogrenciler,int ogrenciSayisi) 
{
	printf("\n");
    printf("%37s","*** KAYIT LISTELEME ***\n\n");

    if (ogrenciSayisi==0) 
	{
        printf("Kayit bulunamadi\n");
        
        return;
    }
    printf("%-15s%-15s%-15s%-15s\n","Numara","Ad","Vize Notu","Final Notu");
    int i;
    for (i=0;i<ogrenciSayisi;i++) 
	{
        printf("%-15d%-15s%-15.2f%-15.2f\n",ogrenciler[i].numara,ogrenciler[i].ad,ogrenciler[i].vize,ogrenciler[i].final);
    }
}

void Guncelle(struct ogrenci*ogrenciler,int ogrenciSayisi,int numara) 
{
    int i;
    for (i=0;i<ogrenciSayisi;i++) 
	{
        if (ogrenciler[i].numara==numara) 
		{
			printf("\n");
            printf("%37s","*** KAYIT GUNCELLEME ***\n");

            printf("Yeni numara:");
            scanf("%d",&ogrenciler[i].numara);

            printf("Yeni ad:");
            scanf("%s",ogrenciler[i].ad);

            printf("Yeni vize notu:");
            scanf("%f",&ogrenciler[i].vize);

            printf("Yeni final notu:");
            scanf("%f",&ogrenciler[i].final);

            printf("Kayit guncellendi\n");
            
            return;
        }
    }
    printf("Girdiginiz numaraya ait bir ogrenci bulunamadi\n");
}

void SinifOrtalamasi(struct ogrenci*ogrenciler,int ogrenciSayisi) 
{
    float toplamNot=0.0;
    int i;
    for (i=0;i<ogrenciSayisi;i++) 
	{
        toplamNot+=ogrenciler[i].vize*0.40+ogrenciler[i].final*0.60;
    }
    float SinifOrtalamasi=toplamNot/(ogrenciSayisi);
    printf("\nSinif Ortalamasi:%.3f\n",SinifOrtalamasi);
}

void EnBasarili(struct ogrenci*ogrenciler,int ogrenciSayisi) 
{
    float max=0;
    int min=-1,i;

    for (i=0;i<ogrenciSayisi;i++) 
	{
        float ortalama=(ogrenciler[i].vize*0.4)+(ogrenciler[i].final*0.6);
        if (ortalama>max) 
		{
            max=ortalama;
            min=i;
        }
    }

    if (min!=-1) 
	{
        printf("\n*** EN BASARILI OGRENCI ***\n");
        printf("Numara:%d\n",ogrenciler[min].numara);
        printf("Ad:%s\n",ogrenciler[min].ad);
        printf("Vize:%.3f\n",ogrenciler[min].vize);
        printf("Final:%.3f\n",ogrenciler[min].final);
        printf("Ortalama: %.3f\n",max);
    }
    else 
	{
        printf("Hicbir ogrenci bulunamadi.\n");
    }
}

int main() 
{
    int ogrenciSayisi;

    struct ogrenci*ogrenciler=(struct ogrenci*)malloc(ogrenciSayisi*sizeof(struct ogrenci));

    int secim;
    do 
	{
		printf("\n");
        printf("%27s","*** MENU ***\n");
        printf("1-->Yeni kayit ekleme\n");
        printf("2-->Kayit listeleme\n");
        printf("3-->Kayit guncelleme\n");
        printf("4-->Sinif ortalamasi hesaplama\n");
        printf("5-->Ortalamaya gore en basarili ogrenciyi goster\n");
        printf("6-->Cikis\n");

        printf("Seciminiz:");
        scanf("%d",&secim);

        switch (secim) 
		{
            case 1:
                Kayit(ogrenciler,&ogrenciSayisi);
                break;
            case 2:
            	Liste(ogrenciler,ogrenciSayisi);
                break;
            case 3:
            	printf("\n");
                printf("%37s","*** KAYIT GUNCELLEME ***\n");
                int numara;
                printf("Guncellenecek ogrencinin numarasini girin: ");
                scanf("%d",&numara);
                Guncelle(ogrenciler,ogrenciSayisi,numara);
                break;
			case 4:
				SinifOrtalamasi(ogrenciler,ogrenciSayisi);
                break;
            case 5:
            	EnBasarili(ogrenciler,ogrenciSayisi);
                break;
            case 6:
                break;
            default:
                printf("Gecersiz secim\n");
                break;
        }
    }
    while (secim != 6);

    return 0;   
}
 
