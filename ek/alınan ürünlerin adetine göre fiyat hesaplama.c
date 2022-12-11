/*Ürünlere göre ücret hesaplama*/

#include <stdio.h>

int main()
{
  int kola,su,misir,bilet,toplamfiyat;
  
  printf("Aldiginiz kola sayisini girin:");
  scanf("%d",&kola);
  
  printf("Aldiginiz su sayisini girin:");
  scanf("%d",&su);
  
  printf("Aldiginiz misir sayisini girin:");
  scanf("%d",&misir);
  
  printf("Aldiginiz bilet sayisini girin:");
  scanf("%d",&bilet);
  
  toplamfiyat=kola*17+su*5+misir*32+bilet*43;
  
  printf("Toplam Tutar:%d:",toplamfiyat);
  
}
