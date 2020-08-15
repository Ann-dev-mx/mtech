#include <stdio.h>
int main() {
    int n,a[20],m,i,k,o,e,j;
    printf("how many numbers u need");
    scanf("%d" ,&n);
    printf("enter the m ");
    scanf("%d" ,&m);
    for(i=0;i<n;i++)
    {
        printf("enter the number");
        scanf("%d",&a[i]);
    }
    
    
    for(i=1;i<n-m;i++)
    {
        e=0;
        o=0;
        if((a[i]%2 == 0 && a[i+m-1]%2 == 0) || (a[i]%2 != 0 && a[i+m-1]%2 != 0))
        {
            for(k=i ;k<m;k++)
            {
                if(a[k]%2 == 0){
                    e++;
                }
                else{
                    o++;
                }
                
            }
            
        }
       
        if( e == m || o == m){
            if(a[i]%2 == 0  && e == m)
            {
                printf("the first group of even numbers are");
                for(j=i;j<m;k++){
                    printf("%d",a[j]);
                }    
            } 
           if(a[i]%2 != 0  && o == m)
            {
                printf("the first group of odd numbers are");
                for(j=i;j<m;k++){
                    printf("%d",a[j]);
                }    
            } 
            
        }
        
    }    
       
            
}