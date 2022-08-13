
/***********************************
*Autor: Carlos Andres Rojas Rocha
*Primer tarea de hpc
*fecha:10/8/2022
* APP que crea un triangulo de asteriscos
***********************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void triangulo(){
int lineas, i, j;

	printf("*===================================================*\n");
	printf("*                   Bienvenido                      *\n");
	printf("*       APP que crea un triangulo rectangulo        *\n");
	printf("*===================================================*\n");
	/*se requiere almacenar el numero de lineas que tendra el triangulo*/
	printf("\nIngrese el numero de lineas del triangulo: ");
	scanf("%i" ,&lineas);
	
	
	if(lineas <=14){
	for(i=1; i<=lineas; i++)
	{
	/*j es el que completa cuantos * tiene cada linea, que siempre sera 1 mas a la anterior*/
	for (j = 0; j < i; j++)
        {
            printf("*");
	}
	printf("\n");
	}
	else{
	printf("\nNo se permiten mas de 14 lineas\n");
	}
}
}

int main(){
	triangulo();
return 0;
}
