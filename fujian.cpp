#include <stdio.h>    
int main() 
{ 
    int n,m,a,sum=0; 
    scanf("%d",&n);
 
       while (n--) 
          { 
           scanf("%d",&m);
           sum=0;
          while(m--)
          {
           scanf("%d",&a);
           sum=sum+a;  
           }
          printf("%d\n",sum);
        }  
   return 0; 
}
