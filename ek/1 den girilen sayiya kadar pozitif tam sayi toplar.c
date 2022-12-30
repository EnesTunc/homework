/*Girilen sayiya kadar tüm pozitif tam sayilarin toplanmasý*/

#include <stdio.h>

int main()
{
	int limit,sum=0,i=1;
	
	printf("Limit sayiyi girin==>");
	scanf("%d",&limit);
	
	for (i=1;i<=limit;i++)
	{
		sum=sum+i;
	}
	printf("\n\n1 den %d'ye kadar girilen sayilarin toplami==>%d",limit,sum);
}
