/* swap first and last digits of a number*/

#include <stdio.h>
#include <math.h>

int main()
{
	int sayi1,sayi2;
	int lastdigit,firstdigit;
    int i;
    
    printf("Sayi giriniz:");
	scanf("%d",&sayi1);
	int x=sayi1;
	
	lastdigit=sayi1%10;
	printf("Last digit:%d\n",lastdigit);
	
	 if (sayi1>0){
		while (sayi1>10)
	sayi1=sayi1/10;
	firstdigit=sayi1;
	}	
	  	printf("First digit:%d\n",firstdigit);	
	  	i=log10(x);
	  	printf("i:%d\n",i);
	  	
	
    sayi2=(pow(10,i)*lastdigit)+(x% (int) pow(10,i))-lastdigit+firstdigit;
   
    printf("Girilen sayi:%d\n",x);
    printf("ilk ve son degerleri degisince:%d",sayi2);
	  	
	  	
}
