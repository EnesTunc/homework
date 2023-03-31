/*The multiplication table*/

#include <stdio.h>


int table(int x, int y) 
{
    if (x==1&&y==1) 
	{
        printf("\n");
    }
    
    if (y==1) 
	{
        printf("%d  ",x);
    }
    
    printf("%d  ",x*y);
    
    if (y<10) 
	{
        table(x,y+1);
    } 
	else if (x<10) 
	{
        printf("\n");
        table(x+1,y);
    }
}

int main() 
{
    table(0,0);
    
    return 0;
}

