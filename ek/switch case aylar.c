/*Switch Case ile aylar*/

#include <stdio.h>

int main()
{
	int aylar;
	
	printf("Yilin kacinci ayi==>");
	scanf("%d",&aylar);
	
	switch (aylar)
	{
		case 1:
			printf("Ocak");
			break;
			
		case 2:
			printf("Subat");
			break;
			
		case 3:
			printf("Mart");
			break;
			
		case 4:
			printf("Nisan");
			break;
			
		case 5:
			printf("Mayis");
			break;
			
		case 6:
			printf("Haziran");
			break;
			
		case 7:
			printf("Temmuz");
			break;
		
		case 8:
			printf("Agustos");
			break;
			
		case 9:
			printf("Eylul");
			break;
			
		case 10:
			printf("Ekim");
			break;
			
		case 11:
			printf("Kasim");
			break;
		
		case 12:
			printf("Aralik");
			break;
			
		default:
			printf("Yanlis giriþ yaptin");
	}
	return 0;
}
