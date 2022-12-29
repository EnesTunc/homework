/*print the Floyd's Triangle*/

#include <stdio.h>

int main()
{
	int sira;
	int i,j,a=1;
	
	printf("Ucgenin kac sira olacagini girin==>");
	scanf("%d",&sira);
	
	for (i=1;i<=sira;i++)
	{  
			for (j=1;j<=i;j++)
			{
			printf("%d-",a);
			a++;
		    }
 		printf("\n");
		
		
	}
	
	
}
