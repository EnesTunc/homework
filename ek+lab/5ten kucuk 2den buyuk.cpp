/*Program:5ten kucuk 2 den buyuk mu kontrol etmek*/
#include_next <stdio.h>
     
     int main()
	 {
   	
   	int sayi;
   	printf("Sayi gir:");
   	scanf("%d",&sayi);
   	
    if (sayi<5&& sayi>2)
       printf("5ten kucuk 2den buyuktur");
       
       
    else  
       printf("2 ile 5in araliginda degildir");
   
       
	   return 0;
     }
