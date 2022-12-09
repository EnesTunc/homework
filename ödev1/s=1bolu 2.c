/*with a natural number, n, as its input which calculates the 
following formula and writes the result in the standard output: S = ½ + ¼ + … 
+1/n*/

#include <stdio.h>

int main()
{
	double s;
	float n;
	float i=2;
	
	printf("Sayi giriniz:");
	scanf("%f",&n);
	
	while (i<=n){
	
	s=1/i;
	i=i+2;
	s=s+(1/i);
	
	}
	
	printf("%lf",s);
	
}


