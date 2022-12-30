#include <stdio.h>
#define SIZE 8
#include <math.h>

int main()
{
    
    int i;
    float a[SIZE],sum=0,ortalama;
    
    for (i=0;i<SIZE;i++)
    {
    	printf("%d. sayi==>",i+1);
    	scanf("%f",&a[SIZE]);
    	sum=sum+a[SIZE];
	}
	ortalama=sum/8;
	
	printf("Dizideki elemanlarin ortalamasi:%f",ortalama);
	
	
}
