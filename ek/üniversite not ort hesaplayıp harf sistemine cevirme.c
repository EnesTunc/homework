#include <stdio.h>

int main()
{
	
	int vize,final,lab;
	
	printf("Vize notunuzu giriniz:");
	scanf("%d",&vize);
	
	if (vize>100 || vize<0){
		printf("\nNotu hatali girdiniz");
		return 0;
	}
	
    printf("\nFinal notunuzu giriniz:");
	scanf("%d",&final);
	
	if (final>100 || final<0){
		printf("Notu hatali girdiniz");
		return 0;
	}
	
	printf("\nlab notunuzu giriniz:");
	scanf("%d",&lab);
	
	if (lab>100 || lab<0){
		printf("Notu hatali girdiniz");
		return 0;
	}
	
	float ort=vize*0.30+final*0.60+lab*0.10;
	printf("\nOrtalaminiz:%f\n",ort);
	
	if (ort>90){
		printf("\nOrtalamanin harf karsiligi AA\n");
		printf("\nDers basari ile gecilmistir  :)");
		return 0;
	}
	
	if (ort<90 && ort>=80){
		printf("\nOrtalamanin harf karsiligi BA\n");
		printf("\nDers basari ile gecilmistir  :)");
		return 0;
    }
    
    if (ort<80 && ort>=75){
		printf("\nOrtalamanin harf karsiligi BB\n");
		printf("\nDers basari ile gecilmistir   :)");
		return 0;
    }
	
	if (ort<75 && ort>=70){
		printf("\nOrtalamanin harf karsiligi CB\n");
		printf("\nDers basari ile gecilmistir   :)");
		return 0;
    }
	
	if (ort<70 && ort>=60){
		printf("\nOrtalamanin harf karsiligi CC\n");
		printf("\nDers basari ile gecilmistir   :)");
		return 0;
    }
	
	if (ort<60 && ort>=50){
		printf("\nOrtalamanin harf karsiligi DC\n");
		printf("\nDers kosullu olarak gecilmistir  :/");
		return 0;
    }
	
	if (ort<50 && ort>=40){
		printf("\nOrtalamanin harf karsiligi DD\n");
		printf("\nMaalesef bu derste basarisiz oldunuz :(");
		return 0;
    }
    
    if (ort<40 && ort>=30){
		printf("\nOrtalamanin harf karsiligi DF\n");
		printf("\nMaalesef bu derste basarisiz oldunuz :(");
		return 0;
    }
    
    if (ort<=30 && ort>=0){
		printf("\nOrtalamanin harf karsiligi FF\n");
		printf("\nMaalesef bu derste basarisiz oldunuz :(");
		return 0;
    }
    
    return 0;
    
    
}
