/*Maa�� girilen i�cinin %23 zam ile alacag� yeni �cretin hesaplanmas�*/

#include <stdio.h>

int main()
{
    float maas,zamlimaas;
    
    printf("Mevcutta alinan aylik ucreti giriniz:");
    scanf("%f",&maas);
    
    zamlimaas=maas*23/100+maas;
    
    printf("Yeni zam ile alacaginiz yeni aylik ucret: %f",zamlimaas);
    
    

}
