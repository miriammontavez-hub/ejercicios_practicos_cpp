/**Análisis de texto */
#include<stdio.h>
#include<string.h>

int main(){
    char *texto;
    int vocales=0;
    int a=0;
    int e=0;
    int i=0;
    int o=0;
    int u=0;
    scanf("%[^\n]",texto);
    size_t longitud = strlen(texto);
    if(texto[longitud-1]!='.'){
        printf("No termina en punto\n");
        return 0;
    }
    for(int x=0; x<longitud; x++){
        if(texto[x]=='A' or texto[x]=='a'){
            vocales = vocales + 1;
            a= a+1;
        }
        else if(texto[x]=='E' or texto[x]=='e'){
            vocales = vocales + 1;
            e= e+1;
        }
        else if(texto[x]=='I' or texto[x]=='i'){
            vocales = vocales + 1;
            i= i+1;
        }
        else if(texto[x]=='O' or texto[x]=='o'){
            vocales = vocales + 1;
            o= o+1;
        }
        else if(texto[x]=='U' or texto[x]=='u'){
            vocales = vocales + 1;
            u= u+1;
        }
    }
    printf("El texto tiene:\n");
    printf("%ld caracteres\n", longitud);
    printf("%d vocales\n", vocales);
    printf("%d letras a\n", a);
    printf("%d letras e\n", e);
    printf("%d letras i\n", i);
    printf("%d letras o\n", o);
    printf("%d letras u\n", u);
}
