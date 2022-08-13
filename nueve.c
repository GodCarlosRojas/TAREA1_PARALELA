
/***********************************
*Autor: Carlos Andres Rojas Rocha
*Primer tarea de hpc
*fecha:10/8/2022
* APP que crea una matriz de numeros aleatorios y los resta
***********************************/
#include <stdio.h>
#include <stdlib.h>


void matriz(){
	int numeros[100][100],numeros2[100][100],filas,columnas, resta[100][100],i,j;
	printf("*===================================================*\n");
	printf("*                   Bienvenido                      *\n");
	printf("*            APP que resta dos matrices             *\n");
	printf("*===================================================*\n");
	/*requerimos de un numero de filas y columnas*/
	printf("Digite el numero de filas: ");
	scanf("%i" ,&filas);
	printf("Digite el numero de columnas: "); 
	scanf("%i" ,&columnas);
	
	
	if(filas<=8 && columnas<=8){
/*primero se crea calumna por columna, y estas formaran las filas*/
/*Y se llenara de numeros aleatorios*/
		for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
		numeros[i][j]= rand() % 5;
			}
		}printf("\nLa primer matriz\n");
/*DE esta forma se imprime la matriz*/
		for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
		printf("%i", numeros[i][j]);
			}printf("\n");
		}
		} if(filas>=9  || columnas>=9)
		{
		printf("Tamaño de matriz invalida\n");
		}
/*AHORA SE CREA LA OTRA MATRIZ*/
	
		if(filas<=8 && columnas<=8){
/*primero se crea calumna por columna, y estas formaran las filas*/
/*Y se llenara de numeros aleatorios*/
		for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
		numeros2[i][j]= rand() % 5;
		}
		} 
	
		printf("\nLa segunda matriz\n");
/*DE esta forma se imprime la matriz*/
		for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
		printf("%i", numeros2[i][j]);
			}
			printf("\n");
		}
		}
	
/*Ahora la resta de matricez*/
		for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
		resta[i][j]=numeros[i][j]-numeros2[i][j];
			}
		}printf("\nLa Resta matriz\n");
	
		for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
		printf("%i", resta[i][j]);
			}printf("\n");
		}
}

int main(){
matriz();
return 0;
}
