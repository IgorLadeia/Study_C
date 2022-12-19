#include <stdio.h>

int validacao(long int dia ,long int mes, long int ano){
    int teste;
    
    if (ano >= 1582){
        switch ( mes ){
      
        case 1 :
        if (dia >=1 && dia<= 31){
            teste = 0; 
        }else{
            teste = 1;
        }
        break;
        
        case 2 :
        if (dia >=1 && dia<= 28){
            teste = 0; 
        }else if (dia = 29){
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
                teste = 0;
            }else {
                teste = 1;
        }
            
        }else {
            teste = 1;
        }
        break;
        
        case 3 :
           if (dia >=1 && dia<= 31){
            teste = 0; 
        }else{
            teste = 1;
        }
        break;
        
        case 4 :
           if (dia >=1 && dia<= 30){
            teste = 0; 
        }else{
            teste = 1;
        }
        break;
        
        case 5 :
           if (dia >=1 && dia<= 31){
            teste = 0; 
        }else{
            teste = 1;
        }
        break;
        
        case 6 :
           if (dia >=1 && dia<= 30){
            teste = 0; 
        }else{
            teste = 1;
        }
        break;
        
        case 7 :
           if (dia >=1 && dia<= 31){
            teste = 0; 
        }else{
            teste = 1;
        }
        
        case 8 :
           if (dia >=1 && dia<= 31){
            teste = 0; 
        }else{
            teste = 1;
        }
        break;
        
        case 9 :
        if (dia >=1 && dia<= 30){
            teste = 0; 
        }else{
            teste = 1;
        }    
        break;
        
        case 10 :
           if (dia >=1 && dia<= 31){
            teste = 0; 
        }else{
            teste = 1;
        }
        break;
        
        case 11 :
           if (dia >=1 && dia<= 30){
            teste = 0; 
        }else{
            teste = 1;
        }
        break;
        
        case 12 :
           if (dia >=1 && dia<= 31){
            teste = 0; 
        }else{
            teste = 1;
        }
        break;
        
        default :
        teste = 1;
        } 
        
    }else {
        teste = 1;
    }
    
    return teste;
}
    

int main()
{
    long int dia,mes,ano;
    int anota;
    scanf("%ld %ld %ld",&dia ,&mes ,&ano);
    
    anota = validacao(dia,mes,ano);
    // validacao = 0 --> data valida
    // validacao = 1 --> data invalida
    
    if (anota == 0){
        printf("%s\n","DATA VALIDA"); 
    }else if (anota ==1){
        printf("%s\n","DATA INVALIDA"); 
    }
    
    
 
}
