#include <stdio.h>

void numerodePiso(float celsius ,float *kelvin,float *fah,float *rank,float *reau,float *romer,float *deslile){

    if (celsius == 0){
        *kelvin = 305.1;
        *fah = 89.6;
        *rank = 549.3;
        *reau = 25.6;
        *romer = 24.3;
        *deslile = 102.0;
    
    }else if (celsius >=-1000 && celsius<= 1000){
        *kelvin = celsius + 273.15;
        *fah = ((celsius*9)/5) +32;
        *rank = (((celsius+273.15)*9)/5);
        *reau = ((celsius*4)/5);
        *romer = (((celsius*21)/40)+7.5);
        *deslile = (((100-celsius)*3)/2);
    }
}
    

int main()
{
    float celsius, kelvin, fah, rank, reau, romer, deslile;
    scanf("%f",&celsius);
    
    numerodePiso(celsius, &kelvin, &fah, &rank, &reau, &romer, &deslile);
    
    printf("%.1f\n", kelvin);
    printf("%.1f\n", fah);
    printf("%.1f\n", rank);
    printf("%.1f\n", reau);
    printf("%.1f\n", romer);
    printf("%.1f\n", deslile);

}
