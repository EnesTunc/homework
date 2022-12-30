#include <stdio.h>
#define SIZE 10

int main()
{
	int i,sayi=0;
	int a[SIZE],kareleri;
	
	
	for (i=0;i<SIZE;i++)
	{
	   	
			printf("sayilar==>");
    	    scanf("%d",&a[i]);
    	    sayi=a[i];
    	    
    	    if (sayi==-1)
    	    {
    	    	break;
			}
    	    kareleri=sayi*sayi;
    	    
    	  
			printf("Girilen sayilarin kareleri=%d\n",kareleri);
			
			
		    }
	
	
}
