/*klavyeden girilen 2 sayýnýn çarpýmlarýný * kullanmadan bul*/

#include <stdio.h>


int multiplication(int n1,int n2)
{
	int result=n1,i;
	
	for (i=2;i<=n2;i++)
	{
		result=result+n1;
	}
	
	return result;
}
int main()
{
	int n1,n2,result;
	
	printf("Enter the first number==>");
	scanf("%d",&n1);
	
	printf("Enter the second number==>");
	scanf("%d",&n2);
	
	result=multiplication(n1,n2);
	printf("The result of the multiplication is==>%d",result);
	
	return 0;
}
