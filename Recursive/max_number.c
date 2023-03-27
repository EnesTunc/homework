/*Find the max number in the array*/

#include <stdio.h>


int Max(int a[],int size);

int main() 
{
    int a[100];
    int size,i;
    
    printf("Enter the number of digits of the array:");
    scanf("%d",&size);
    
    for(i = 0;i<size;i++) 
	{
		printf("Enter the %d. number:",i+1);
        scanf("%d", &a[i]);
    }
    
    int max=Max(a,size);
    
    printf("Maximum number==>%d",max);
    
    return 0;
}

int Max(int a[],int size) 
{
    if(size==1) 
	{
        return a[0];
    }
    
    int max=Max(a,size-1);
    
    if(max>a[size-1]) 
	{
        return max;
    }
    else 
	{
        return a[size - 1];
    }
}

