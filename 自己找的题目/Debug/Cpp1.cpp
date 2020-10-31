#include <stdio.h>    
int main() 
{ 
    int n,m,a,sum=0; /*定义n m a sum*/
    scanf("%d",&n);/*输入n*/
 
       while (n--) /*n减少构成循环，n为行数*/
          { 
           scanf("%d",&m);/*输入m*/
           sum=0;
          while(m--)/*m减少构成循环，m为一行中数字的多少*/
          {
           scanf("%d",&a);/*输入a*/
           sum=sum+a; /*sum为每次循环输入a的总和*/ 
           }
          printf("%d\n",sum);
        }  
   return 0; 
}
