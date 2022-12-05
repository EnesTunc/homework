/*print multiplication table of any number*/

#include <stdio.h>



int main()
{
	int sayi;
	int i=1;
	
	printf("Carpim tablosunu bulmak istedigin sayi:",sayi);
	scanf("%d",&sayi);
	
	while (i<11)
	{
		printf("%d\n",i*sayi);
		i=i+1;
}
}
