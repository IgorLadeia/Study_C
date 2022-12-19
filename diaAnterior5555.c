#include <stdio.h>

int conferirano (int c)
{
    if ((c % 4 == 0 && c % 100 != 0) || (c % 400 == 0)){
        return 1;
    }else {
        return 0;
    }
}


int maxmes(int b, int c){
  switch (b){
   
   case 1 :
   return 31;
   break;
   
   case 2 :
     if (conferirano(c)== 1 ){
       return 29;
    }else if (conferirano(c) == 0){
       return 28;
    }
   break;
   
   case 3 :
   return 31;
   break;
   
   case 4 :
   return 30;
   break;
   
   case 5 :
   return 31;
   break;
   
   case 6 :
   return 30;
   break;
   
   case 7 :
   return 31;
   break;
   
   case 8 :
   return 31;
   break;
   
   case 9 :
   return 30;
   break;
   
   case 10 :
   return 31;
   break;
   
   case 11 :
   return 30;
   break;
   
   case 12  :
   return 31;
   break;
  }
}


void diaanterior(int a,int b,int c, int *p1, int *p2, int *p3){
  
  if (a>1 && a <= maxmes(b,c)){
     *p1 = a-1;
     *p2 = b;
     *p3 = c;
     printf("%d %d %d\n",*p1 , *p2 ,*p3);
  }else if (a == 1) {
   
     if (b>1 && b<=12){
      *p1 = maxmes(b-1,c);
      *p2 = b-1;
      *p3 = c;
      printf("%d %d %d\n",*p1 , *p2 ,*p3);
     }else if (b == 1){
      *p1 = maxmes(12,c);
      *p2 = 12;
      *p3 = c-1;
      printf("%d %d %d\n",*p1 , *p2 ,*p3);
     }
  }
  
}



int main(){
    int a,b,c,p1,p2,p3;
    scanf("%d %d %d", &a, &b, &c);
    diaanterior(a,b,c,&p1,&p2,&p3);

}


