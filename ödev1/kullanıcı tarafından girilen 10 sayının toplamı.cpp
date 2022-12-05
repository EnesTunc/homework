/*reads 10 numbers from the user and prints out their sum*/

#include <stdio.h>


int main()
{
	
	int i=0;
	float a;
	float sum=0;
	while (i<10) {
		
		printf("Sayi giriniz;",a);
		scanf("%f",&a);
		i=i+1;
		sum=sum+a;
		
	}
	
	printf("Sayilarin toplami;%f",sum);
	return 0;
	
}
