#include <stdio.h>    
int main() 
{ 
    int n,m,a,sum=0; /*����n m a sum*/
    scanf("%d",&n);/*����n*/
 
       while (n--) /*n���ٹ���ѭ����nΪ����*/
          { 
           scanf("%d",&m);/*����m*/
           sum=0;
          while(m--)/*m���ٹ���ѭ����mΪһ�������ֵĶ���*/
          {
           scanf("%d",&a);/*����a*/
           sum=sum+a; /*sumΪÿ��ѭ������a���ܺ�*/ 
           }
          printf("%d\n",sum);
        }  
   return 0; 
}
