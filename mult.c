#include <stdio.h>



int multiplicacao(int n, int v){
     
    int vs;
    if(n>0){
        n--;
        vs = v;
    }
    else if (n<0){
        n++;
        vs = -v;
    }

    if(n==0)
        return vs;
    else
        return vs + multiplicacao(n,v);
}



int main(){
    long int v,res=0;
    int n;
    scanf("%d %ld",&n,&v);
    if(n >= 0 ){
        if(v > 0 ){
            res=multiplicacao(n,v);
            printf("%ld\n",res);
        }
    }
  
}