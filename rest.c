#include <stdio.h>

int main()
{
    int a,b,c,d ;
 
    scanf("%d %d", &a, &b);
   
   if (a>=0 && b>0){
    c = a/b;
    d = a%b;
    printf("%d %d\n",c ,d); 
   }else if (a>=0 && b == 0){
       printf("indefinido\n");
   }
}