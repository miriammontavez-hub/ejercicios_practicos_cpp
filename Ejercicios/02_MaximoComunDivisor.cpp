/**Máximo común Divisor*/
#include <stdio.h>

int main(){
	int primero, segundo, contador;
	printf("¿Primer numero?\n");
	scanf("%d", &primero);
	printf("¿Segundo numero?\n");
	scanf("%d", &segundo);
	if(primero == segundo){
		printf("El Maximo Comun Divisor es %d", primero);
		printf("Introduce un numero para salir");
		scanf("%d", &primero);
		return 0;
	}
	if(primero > segundo)
		contador = primero/2;
	else
		contador = segundo/2;
	for(; contador >= 1; contador--)
		if(primero%contador==0 && segundo%contador==0){
			printf("El Maximo Comun Divisor es %d\n", contador);
			printf("Introduce un numero para salir");
			scanf("%d", &primero);
			return 0;
		}
}