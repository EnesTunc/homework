/*The multiplication table*/

#include <stdio.h>


int table(int i, int j) 
{
    if (i==1&&j==1) 
	{
        printf("\n");
    }
    
    if (j==1) 
	{
        printf("%d  ",i);
    }
    
    printf("%d  ",i*j);
    
    if (j<10) 
	{
        table(i,j+1);
    } 
	else if (i<10) 
	{
        printf("\n");
        table(i+1,1);
    }
}

int main() 
{
    table(1,1);
    
    return 0;
}

