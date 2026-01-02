/**Tipos de triángulo*/
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Introduce un número entero para el lado a\n");
    scanf("%d", &a);
    printf("Introduce un número entero para el lado b\n");
    scanf("%d", &b);
    printf("Introduce un número entero para el lado c\n");
    scanf("%d", &c);
    if(a==b && a==c){
        printf("Es un triangulo equilatero.\n");
    }
    else{
        if(a>=b+c || b>=a+c || c>=a+b)
            printf("No es un triangulo.");
        else{
            if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
                if(a==b || b==c || a==c)
                    printf("Es isosceles y cumple el teorema de Pitágoras.");
                else{
                    printf("Es escaleno y cumple el teorema de Pitágoras.");
                }
            }    
            else{
                if(a==b || b==c || a==c)
                    printf("Es isosceles y no cumple el teorema de Pitágoras.");
                else{
                    printf("Es escaleno y no cumple el teorema de Pitágoras.");
                }
            }
        }                 
    }    
}