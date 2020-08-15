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
    for(i=0;i<n;i++)
    {
        if(x[i] % 2 == 0)
        {
           printf("the index number is"); 
           printf("%d",i);
          
           printf(" ");
           printf("the  number is"); 
           printf("%d",x[i]);
           
           break;
        }
            
    }
    
}