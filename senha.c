#include <stdio.h>


int main()
{
    int senha,n1,n2,n3;
    scanf("%d", &senha);
    
    n1 = senha%1000;
    if (n1 >100){
        n2 = n1%100;
        if (n2 > 10){
             n3 = n2%10;
        }else{
            n2 = 0;
        }
        
    }else {
        n3 = 0;
        
    }
    if (senha>1000 && senha<=9999)
        if (n1 != 0 && n2 != 0 && n3 != 0 ){
            printf("SIM\n");
        }else{
           printf("NAO\n"); 
        }
        
    else {
        printf("NAO\n");
        }   
   
return 0;
}

