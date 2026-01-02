/** Rombo de lado N */
# include<stdio.h>
int main(){
    int lado, espacio;
    printf("Longitud del lado\n");
    scanf("%d",&lado);
    for(int fila = 1; fila <= lado; fila++){
        espacio = lado - fila;
        for(; espacio > 0; espacio--){
            printf(" ");}
        for(int x = 0; x < fila; x++){
            printf("* ");}
        printf("\n");    
        }
    for(int fila = lado - 1;fila > 0; fila--){
        espacio = lado - fila;
        for(; espacio > 0; espacio--){
            printf(" ");}
        for(int x = 0; x < fila; x++){
            printf("* ");}
        printf("\n");    
        }
}