/*convert a binary number into a decimal number without 
using array and while loop*/

#include <stdio.h>

int main()
{
	int sayi,i=0;
	int a=0;
	int degerler;
	int sum=0;
	
	printf("ikilik sistemden onluk sisteme cevirmek istediginiz sayiyi girin==>");
	scanf("%d",&sayi);
	
	int x=sayi;

	for (i=0;x>0 && i<500;i++)
	{
		if (x%10!=0 && x%10!=1)
		{
			printf("!!!Sadece 1 ve 0 rakamlarini kullanabilirsin!!!");
			return 0;
		}
	x=x/10;
    }  
	
	for (i=0;sayi>0;a++)
	{
		i=sayi%10;
		sayi/=10;
		degerler=i*pow(2,a);
		sum=sum+degerler;	
	}
	printf("Onluk sayimiz==>%d",sum);
}
