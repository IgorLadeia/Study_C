#include <stdio.h>

int maior (int a, int b ,int c){
    int m;
    if (a>=b && a>=c){
        m = a;
    }else if (b>=a && b>=c){
        m = b;
    }else {
        m = c;
    }
    
    return m;
}

int main()
{
    int a,b,c;
 
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", maior(a,b,c));

}

