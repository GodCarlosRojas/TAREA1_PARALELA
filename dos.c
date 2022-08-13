
/***********************************
*Autor: Carlos Andres Rojas Rocha
*Primer tarea de hpc
*fecha:10/8/2022
* APP calculo de años, semanas y dias 
***********************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void dias(){
int yyyy,semana, daprox;
float dias, yydc,sob1, smdc, dd;
	printf("*===================================================*\n");
	printf("*                   Bienvenido                      *\n");
	printf("*       APP calculo de años, semanas y dias       *\n");
	printf("*===================================================*\n");
	/*se requiere capturar los dias de entrada*/
	printf("\nIngrese el numero de dias a combertir: ");
	scanf("%f" ,&dias);
	/*sob1 almacena los decimales para asi podere calcular las semanas y los dias*/
	/*yydc hace referencia al año con decimales para hacer luego el calculo de sus decimales*/
	yydc=dias/365;
	/*yyyy hace referencia a los años sin decimales*/
	yyyy=dias/365; 
	sob1=yydc-yyyy;
	printf("\n*           Numero de años: %i                    *",yyyy );
	printf("\n");
	/*semana almacena el dato pero en entero*/
	/*smdc almacena el numero de semanas con decimal y todo, para asi calcular los dias*/
	semana=(sob1*365)/7;
	smdc=(sob1*365)/7;
	sob1=smdc-semana;
	printf("\n*           Numero de semanas: %i                *",semana );
	printf("\n");
	dd=sob1*7;
	/*los dias se entregan en decimal, y como ya no se calculan mas cosas, entonces
	se redondean, y asi se tiene la solucion definitiva*/
	daprox=round(dd);
	printf("\n*           Numero de dias: %i                   *",daprox );
	printf("\n");
	
	
}

int main(){
	dias();
return 0;
}
