/*find LCM for two numbers*/

#include <stdio.h>
 
int main()
{
    int sayi1,sayi2,LCM;
    
     
    printf("1.Sayiyi giriniz==>");
    scanf("%d",&sayi1);
    
    printf("2.Sayiyi giriniz==>");
    scanf("%d",&sayi2);
     
    for(int i=(sayi1*sayi2);i>0;i--)
    {
        if(i%sayi1==0 && i%sayi2==0){ 
            LCM=i;
        }
    }
    printf("\nLCM==>>%d",LCM);
    
    return 0;
}
