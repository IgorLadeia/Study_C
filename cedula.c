#include <stdio.h>

void numerodeCedulas(int money,int *cem,int *cinquenta,int *vinte,int *dez,int *cinco,int *dois,int *um){
    
    int intermediario;
    
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
    int money,cem,cinquenta,vinte,dez,cinco,dois,um;
    scanf("%d",&money);
    
    numerodeCedulas(money,&cem,&cinquenta,&vinte,&dez,&cinco,&dois,&um);
    
    printf("R$%d.00\n", money); 
    printf("%d nota(s) de R$100.00\n", cem);
    printf("%d nota(s) de R$50.00\n", cinquenta);
    printf("%d nota(s) de R$20.00\n", vinte);
    printf("%d nota(s) de R$10.00\n", dez);    
    printf("%d nota(s) de R$5.00\n", cinco);
    printf("%d nota(s) de R$2.00\n", dois);
    printf("%d nota(s) de R$1.00\n", um);
}
