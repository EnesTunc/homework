/*Maaþý girilen iþcinin %23 zam ile alacagý yeni ücretin hesaplanmasý*/

#include <stdio.h>

int main()
{
    float maas,zamlimaas;
    
    printf("Mevcutta alinan aylik ucreti giriniz:");
    scanf("%f",&maas);
    
    zamlimaas=maas*23/100+maas;
    
    printf("Yeni zam ile alacaginiz yeni aylik ucret: %f",zamlimaas);
    
    

}
