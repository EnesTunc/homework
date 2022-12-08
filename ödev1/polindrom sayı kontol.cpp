/*check whether a number is palindrome or not*/

#include <stdio.h>


int main()
{
	int sayi;
	int ters=0;
	int a;
	
	printf("Kontrol etmek istedigin sayiyi gir:");
	scanf("%d",&sayi);
	int x=sayi;
	
	while (sayi>0){
		a=sayi%10;
		ters=ters*10+a;
		sayi=sayi/10;	}
		
		if (ters==x)
		
		printf("Bu sayi polindromdur");
		
		else 
		printf("Bu sayi polindrom degildir");
	
}
