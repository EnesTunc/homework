/*convert the length in feet to centimeter*/

#include_next <stdio.h>


int main()
{
	float feet;
	float centimeter;
	
	printf("Feet degerini giriniz;");
	scanf("%f",&feet);
	
	centimeter=feet*30.48;
	printf("Centimeter degeriniz;%f",centimeter);
	
		
}

