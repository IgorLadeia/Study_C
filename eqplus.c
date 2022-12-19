#include <stdio.h>
#include <math.h>

void raizes (float a, float b, float c, float *p1, float *p2 ){
    float bascara; 
    float raiz;
    
    bascara = (b*b) - 4 *a *c;
    raiz = sqrt(bascara);
    if (bascara > 0){
        *p1 = (-b + raiz)/(2*a);
        *p2 = (-b - raiz)/(2*a);
        printf ("%.4f %.4f\n", *p1, *p2 );
    
    } else if (bascara == 0){
        *p1 = -b/(2*a);
        printf ("%.4f\n", *p1 );
        
    }else {
        printf("nao ha raiz real\n");
    }  
    
    
}

int main()
{
    float a,b,c,p1,p2;
    scanf("%f %f %f", &a, &b , &c);
    raizes(a,b,c, &p1,&p2);

}

