#include_next <stdio.h>

/* ehliyet alma yaþý sýnýrý*/


int main(){
	
	char isim[10];
	char soyisim[10];
    int yas;
    
    printf("Lutfen adinizi giriniz:");
    scanf("%s",&isim);
    printf("\nLutfen soyisminizi giriniz:");
    scanf("%s",&soyisim);
    printf("\nLutfen yasinizi giriniz:");
    scanf("%d",&yas);
    
    if(yas>=18){
    printf("Ehliyet alabilirsiniz");
    }
    else 
	{ 
    printf("Ehliyet alamazsiniz");
	}
	}
    
    
