#include <stdio.h>

void numerodeCedulas(long int money,long int *cem,long int *cinquenta,long int *vinte, long int *dez,
long int *cinco,long int *dois,long int *um){
    
    long int intermediario;
    
    *cem = money/100;
    intermediario = money%100;
    *cinquenta = intermediario/50;
    intermediario = intermediario%50;
    *vinte = intermediario/20;
    intermediario = intermediario%20;
    *dez = intermediario/10;
    intermediario = intermediario%10;
    *cinco = intermediario/5;
    intermediario = intermediario%5;
    *dois = intermediario/2;
    intermediario = intermediario%2;
    *um = intermediario/1;
}
    

int main()
{
    long int money,cem,cinquenta,vinte,dez,cinco,dois,um;
    scanf("%ld",&money);
    
    if (money>= 0){
        numerodeCedulas(money,&cem,&cinquenta,&vinte,&dez,&cinco,&dois,&um);
        printf("R$%ld.00\n", money); 
        if (cem>0){
        printf("%ld nota(s) de R$100.00\n", cem);
        }
        if (cinquenta>0){
        printf("%ld nota(s) de R$50.00\n", cinquenta);
        }
        if (vinte>0){
        printf("%ld nota(s) de R$20.00\n", vinte);
        }
        if (dez>0){
        printf("%ld nota(s) de R$10.00\n", dez); 
        }
        if (cinco>0) {
        printf("%ld nota(s) de R$5.00\n", cinco);  
        } 
        if (dois>0){
        printf("%ld nota(s) de R$2.00\n", dois);
        }
        if (um>0){
        printf("%ld nota(s) de R$1.00\n", um);  
        }
    }
}
