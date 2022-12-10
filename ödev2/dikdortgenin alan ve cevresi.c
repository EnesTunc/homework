#include <stdio.h>

int main()
{
	
	int longside,shortside;
	int area,perimeter;
	
    printf("Dikdortgenin uzun kenarini giriniz:");
    scanf("%d",&longside);
    printf("Dikdortgenin kisa kenarini giriniz:");
    scanf("%d",&shortside);
    
    area=longside*shortside;
    
    printf("Dikdortgenin alani:%d\n",area);
    
    perimeter=2*(longside+shortside);
    
    printf("Dikdortgenin cevresi:%d",perimeter);
}
