/*N tane verinin klavyeden girilmesi ve a dizisine yerleþtirilmesi*/

#include <stdio.h>

int main()
{
	int i,N,a[N];
	
	printf("Dizinin eleman sayisini girin-->");
	scanf("%d",&N);
	
	for (i=0;i<N;i++)
	{
		printf("%d. elemani girin-->",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<N;i++)
	{
		printf("\na[%d]-->%d",i,a[i]);
	}
	return 0;
	
}
	
