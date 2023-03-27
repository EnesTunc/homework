/*HCF for two integer numbers(EBOB)*/

#include <stdio.h>


int hcf(int x,int y) 
{
    while (x!=y){
		
        if (x>y)
            x=x-y;
        else
            y=y-x;}
}

int main() 
{
    int x,y;
    printf("Enter  two integer number=>");
    scanf("%d",&x);
    scanf("%d",&y);
    
    printf("HCF==>%d",hcf(x,y));
    
    return 0;
}
