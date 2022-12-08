#include <stdio.h>

int main()
{
    int r;
	float x=3.14;
	float Alan;
	float Cevre;
	int secim;
	
	printf("Lutfen dairenin yaricapini giriniz;");
	scanf("%d",&r);
	
	printf("\nYapmak istediginiz islem icin 1 veya 2 ye basiniz");
	scanf("%d",&secim);
	
    if (secim==1){
	
   	Alan=r*x;
	printf("Dairenizin alani %f birim karedir;",Alan);
	return 0;}
	
    if (secim==2){
	Cevre=2*x*r;
	printf("Dairenizin cevresi %f birimdir",Cevre);}    
	else 
	printf("Hatali rakam sectiniz");
	
	
}
