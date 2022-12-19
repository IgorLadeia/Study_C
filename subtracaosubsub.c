#include <stdio.h>
   
int subtracao(int a,int b) {

    if(b>0){
        subtracao(a-1, b-1);
    
    } else {
        return a;
    } 
}



int main(){
    int a,b,resp;
    
    scanf("%d %d",&a,&b);
    
    if(b >= 0 ){
        if(a >= b){
            resp=subtracao(a,b);
            printf("%d\n",resp);
        }
    }
  
}