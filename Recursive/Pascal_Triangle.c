/*Pascal Triangle*/

#include <stdio.h>


int pascal(int i,int j) 
{
    if (j==0||j==i) 
	{
        return 1;
    } 
	else 
	{
        return pascal(i-1,j-1)+pascal(i-1,j);
    }
}

void print(int n) 
{
	int i,j;
    for (i=0;i<n;i++) 
	{
        for (j=0;j<=i;j++) 
		{
            printf("%d ",pascal(i,j));
        }
        printf("\n");
    }
}

int main() 
{
    int n;
    printf("Enter the number of rows in the Pascal's Triangle==>");
    scanf("%d",&n);
    
    print(n);
    
    return 0;
}

