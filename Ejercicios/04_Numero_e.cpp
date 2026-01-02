/**Número e */
#include<stdio.h>
double factorial(double i){
    double resultado = 1;
    for(; i >= 1; i--){
        resultado = resultado * i;
    }
    return resultado;
}
int main(){
    double error;
    double e = 1;
    bool bucle = true;
    while(bucle){
        printf("Introduce el error deseado en el formato 0.000...\n");
        scanf("%lf", &error);
        if(error > 1 || error <= 0){
            printf("Introduce un valor menor de 1 y distinto de 0\n");
            continue;
        }
        bucle = false;
        double i = 1;
        double divisor=(1/error);
        while((1/divisor)>=error){
            divisor = factorial(i);
            e = e + 1.0/divisor;
            i++;
        }
    }    
        printf("e=%lf",e);
}    