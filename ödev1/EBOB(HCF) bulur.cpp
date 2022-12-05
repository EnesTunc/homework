/*Find HCF for two integer numbers*/

#include<stdio.h>

int main()
{
    int sayi1,sayi2;
	
	printf("ilk  sayiyi gir:");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi gir:");
	scanf("%d",&sayi2);
    
	while (sayi1!=sayi2){
		
        if (sayi1>sayi2)
            sayi1=sayi1-sayi2;
        else
            sayi2=sayi2-sayi1;}
    
    
    printf("HCF:%d",sayi1);
    
    
}
