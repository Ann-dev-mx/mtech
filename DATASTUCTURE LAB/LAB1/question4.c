#include <stdio.h>
int main() 
{
    int n,x[20],i;
    printf("how many numbers u need");
    scanf("%d" ,&n);
    for(i=0;i<n;i++)
    {
        printf("enter the number");
        scanf("%d",&x[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(x[i+1] > x[i] && x[i+1] > x[i+2])
        {
           printf("%d",x[i+1]);
           printf(" ");
        }
            
    }
    
}