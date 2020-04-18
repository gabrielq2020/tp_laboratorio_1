/*
 * Calculadora.c
 */

#include <stdio.h>
#include <stdlib.h>



/**
 * /brief Solicita un numero al usuario y devuelve el resultado
 * /param mensaje Es el mensaje a ser mostrado
 * /return El numero ingresado por el usuario
 *
 */

float getFloat(char mensaje[])
{
	float auxiliar;
	printf("%s",mensaje);
	scanf("%f", &auxiliar);

	return auxiliar;
}


/**
 * /brief Solicita un numero al usuario dentro de un rango permitido y devuelve el resultado
 * /param pResultado Es el numero ingresado por el usuario almacenado en la direccion de memoria
 * /param mensajeError Es el mensaje a ser mostrado en caso de error
 * /param minimo Es el numero mínimo que el usuario puede ingresar
 * /param maximo Es el numero máximo que el usuario puede ingresar
 * /param reintentos Es la cantidad de reintentos
 * /return El numero ingresado por el usuario
 *
 */
int getOpcionMenu(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos)
{
	int ret;
	int num;

	while (reintentos >= 0)
	{
		printf("%s", mensaje);
		fflush(stdin);
		if (scanf("%d", &num) == 1)
		{
			if (num <= maximo && num >= minimo)
			{
				break;
			}
		}
		reintentos--;
		printf("%s", mensajeError);
		fflush(stdin);
	}

	if (reintentos == 0)
	{
		ret = -1;
	}
	else
	{
		ret = 0;
		*pResultado = num;
	}

	return ret;
}


/**
 * /brief Realiza la suma de dos numeros flotantes y devuelve el resultado
 * /param numero1 Es el primer numero ingresado por el usuario
 * /param numero2 Es el segundo numero ingresado por el usuario
 * /return resultado El resultado de la suma
 *
 */
float getSuma(float numero1, float numero2)
{
	float resultado;

	resultado = numero1 + numero2;

	return resultado;
}


/**
 * /brief Realiza la resta de dos numeros flotantes y devuelve el resultado
 * /param numero1 Es el primer numero ingresado por el usuario
 * /param numero2 Es el segundo numero ingresado por el usuario
 * /return resultado El resultado de la resta
 *
 */
float getResta(float numero1, float numero2)
{
	float resultado;

	resultado = numero1 - numero2;

	return resultado;
}


/**
 * /brief Realiza la multiplicación de dos numeros flotantes y devuelve el resultado
 * /param numero1 Es el primer numero ingresado por el usuario
 * /param numero2 Es el segundo numero ingresado por el usuario
 * /return resultado El resultado de la multiplicación
 *
 */
float getMultipilcacion(float numero1, float numero2)
{
	float resultado;

	resultado = numero1 * numero2;

	return resultado;
}


/**
 * /brief Realiza la división de dos numeros flotantes y devuelve el resultado
 * /param numero1 Es el primer numero ingresado por el usuario
 * /param numero2 Es el segundo numero ingresado por el usuario
 * /return resultado El resultado de la división
 *
 */
float getDivision(float numero1, float numero2)
{
	float resultado;

	while(numero2 == 0)
	{
		printf("ERROR: no se puede dividir por cero.\n");
		printf("Por favor ingrese otro número\n");
		scanf("%f", &numero2);
	}

	resultado = numero1 / numero2;

	return resultado;
}


/**
 * /brief Realiza el factorial de un numero flotante y devuelve el resultado
 * /param numero Es el numero ingresado por el usuario
 * /return resultado El resultado del factorial
 *
 */
float getFactorial(float numero)
{
	float resultado;

	if(numero < 0)
	{
		return -1;
	}
	else
	{
		resultado = 1;
		while(numero > 1)
		{
			resultado *= numero;
			numero--;
		}
	}

	return resultado;
}
