/*Convert Temperature from Fahrenheit to Celsius*/
#include_next <stdio.h>


int main()
{
	
	float Celcius;
	float Fahrenheit;
	
	printf("Sicakligin Fahrenheit derecesini giriniz;");
	scanf("%f",&Fahrenheit);
	
	Celcius=((Fahrenheit-32)/1.8);
	
    printf("Sicakligin Celcius degeri;%f",Celcius);
    
    
    
 } 
