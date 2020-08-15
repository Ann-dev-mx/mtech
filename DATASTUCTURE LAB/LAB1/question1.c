#include <stdio.h>
int main() 
{
    int n,x[20],i,sum;
    printf("how many numbers u need");
    scanf("%d" ,&n);
    for(i=0;i<n;i++)
    {
        printf("enter the number");
        scanf("%d",&x[i]);
    }
    sum = 0;
    for(i=0;i<n-2;i++)
    {
        
        sum = sum + ((x[i]+x[i+1])*x[i+2]);
            
    }
    printf("%d" , sum);
}