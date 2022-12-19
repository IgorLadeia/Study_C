#include <stdio.h>
   
int soma(int a, int b){
    if (b>0){
        soma((a + 1),(b - 1));
    }
    else{
         return a;
    }
}


int main(){
    int a,b,resp;
    
    scanf("%d %d",&a,&b);
    
    resp=soma(a,b);
    printf("%d\n",resp);

}