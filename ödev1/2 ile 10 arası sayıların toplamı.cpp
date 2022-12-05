/*Sum of integer numbers between 2 and 10*/

#include_next <stdio.h>



int main()
{
	int i=3;
	int sum=0;
	
	while(i<10){
		
		sum=sum+i;
		i=i+1;
	}
	printf("2 ile 10 arasi sayilarin toplami;%d",sum);
}
