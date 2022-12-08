/*convert a decimal number, n, to binary format*/


#include <stdio.h>    
  
int main()
{  
int sayi;
int i;
int a[10];    

  
printf("Sayi giriniz:");    
scanf("%d",&sayi);    

       for(i=0;sayi>0;i++)   
	  {
	    a[i]=sayi%2;    
        sayi=sayi/2; }
		
		printf("Binary formati:");    
        for(i=i-1;i>=0;i--)    
        {    printf("%d",a[i]);
    }
    
        return 0;  
}  
