#include <stdio.h>

typedef struct KarmasikSayi
{
    float gercel;
    float sanal;
}
KarmasikSayi;

KarmasikSayi toplama(KarmasikSayi sayi1,KarmasikSayi sayi2);

int main() 
{
    struct KarmasikSayi toplam,sayi1,sayi2;

    printf("ilk karmasik sayinin gercel bolumunu girin==>");
    scanf("%f", &sayi1.gercel);
    
    printf("ilk karmasik sayinin sanal bolumunu girin==>");
    scanf("%f", &sayi1.sanal);
    
    printf("ikinci karmasik sayinin gercel bolumunu girin==>");
    scanf("%f", &sayi2.gercel);
    
    printf("ikinci karmasik sayinin sanal bolumunu girin==>");
    scanf("%f", &sayi2.sanal);

    toplam=toplama(sayi1,sayi2);

    printf("Bu iki karmasik sayinin toplami==>%f + %fi\n",toplam.gercel,toplam.sanal);

    return 0;
}
    KarmasikSayi toplama(KarmasikSayi sayi1,KarmasikSayi sayi2)
    {
    KarmasikSayi x;
    
    x.gercel=sayi1.gercel+sayi2.gercel;
    x.sanal=sayi1.sanal+sayi2.sanal;
    
    return x;
}
