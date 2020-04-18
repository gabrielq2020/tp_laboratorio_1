 /*
 ============================================================================
 Name        : Prog1_TP1_V2
 Description :

 1.Ingresar 1er operando (A=x)

 2.Ingresar 2do operando (B=y)

 3.Calcular todas las operaciones
  a)Calcular la suma (A+B)
  b)Calcular la resta (A-B)
  c)Calcular la division (A/B)
  d)Calcular la multiplicacion (A*B)
  e)Calcular el factorial (A!)

 4.Informar resultados
  a)“El resultado de A+B es: r”
  b)“El resultado de A-B es: r”
  c)“El resultado de A/B es: r” o “No es posible dividir por cero”
  d)“El resultado de A*B es: r”
  e)“El factorial de A es: r1 y El factorial de B es: r2”

 5.Salir
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"

int main(void)
{
	setbuf(stdout, NULL);

	float x;
	float y;
	int menu;
	int opcion;
	float resultado;
	float resultadoF1;
	float resultadoF2;

	x = getFloat("Ingrese un numero para A\n");
	y = getFloat("\nIngrese un numero para B\n");

	do
		{
			menu = getOpcionMenu(&opcion,
							  "\nElija una opcion:\n1-Calcular la suma"
							  "\n2-Calcular la resta\n3-Calcular la multiplicación"
							  "\n4-Calcular la división\n5-Calcular el factorial\n"
							  "6-Ingresar nuevamente dos numeros\n7-Salir\n\n",
							  "ERROR: debe ingresar una opcion de 1 a 7\n", 1, 7, 2);
			if (menu == 0)
			{
				switch (opcion)
				{
					case 1:
						resultado = getSuma(x, y);
						printf("\nEl resultado de A+B es: %.2f\n", resultado);
						break;
					case 2:
						resultado = getResta(x, y);
						printf("\nEl resultado de A-B es: %.2f\n", resultado);
						break;
					case 3:
						resultado = getMultipilcacion(x, y);
						printf("\nEl resultado de A*B es: %.2f\n", resultado);
						break;
					case 4:
						resultado = getDivision(x, y);
						printf("\nEl resultado de A/B es: %.2f\n", resultado);
						break;
					case 5:
						resultadoF1 = getFactorial(x);
						resultadoF2 = getFactorial(y);

						if(resultadoF1 == -1)
							{
								printf("ERROR: Factorial de A! no se puede calcular sobre un numero negativo.\n");
							}
							else
							{
								printf("\nEl factorial de A! es: %.2f", resultadoF1);
							}

						if(resultadoF2 == -1)
							{
								printf("ERROR: Factorial de B! no se puede calcular sobre un numero negativo.\n");
							}
							else
							{
								printf("\nEl factorial de B! es: %.2f\n", resultadoF2);
							}
						break;
					case 6:
						x = getFloat("\nIngrese un numero para A\n");
						y = getFloat("\nIngrese un numero para B\n");
						break;
				}
			}
		} while(opcion != 7);

	return 0;
}









