#include <stdio.h>

void numerodePiso(int a, int b, int *p1 , int *p2){
    int piso1 ,piso2;
    
    if (a >= 1 && b >= 1){
        *p1 = (a*b)+((a-1)*(b-1));
        *p2 = 2*(a-1) + 2*(b-1);
    }else {
        *p1 = 1;
        *p2 = 2;
    }
}
    

int main()
{
    int a,b,p1,p2;
    scanf("%d %d", &a, &b);
    
    numerodePiso(a,b, &p1,&p2);
    
    printf("%d\n", p1);
    printf("%d\n", p2);
}

