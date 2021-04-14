/*
 * Funciones.c
 *
 *  Created on: 12 abr. 2021
 *      Author: ssilv
 */
#include "Funciones.h"
//Archivo de implementación.
//Acá estan las implementaciones de las funciones

/**
 * @fn float CalcularSuma(float, float)
 * @brief esta función realiza la suma del operando 1 y el operando 2
 *
 * @param X es el primer operando1
 * @param X es el segundo operando2
 * @return devuelve el resultado de la suma del operando 1 y operando 2
 */
float CalcularSuma(float operando1, float operando2)
{
   float resultado;
   resultado= operando1 + operando2;
   return resultado;
}
/**
 * @fn float CalcularResta(float, float)
 * @brief Esta función recibe dos parametros y va a realizar la resta del operando 1 y el operando 2
 *
 * @param operando1
 * @param operando2
 * @return retorna el resultado de la resta del operando 1 y operando 2
 */
float CalcularResta (float operando1 , float operando2 )
{
   int resultado;
   resultado= operando1 - operando2;
   return resultado;
}
/**
 * @fn float CalcularDivision(float, float)
 * @brief Esta función recibe dos parametros que va a realizar la división del operando 1 y
 * el operando 2
 * Dentro de la función verifico y contemplo el error con la función if-else de que no es posible
 * dividir por 0
 * @param operando1
 * @param operando2
 * @return retorna el resultado de la división del operando 1 y operando 2
 */
 float CalcularDivision( float operando1, float operando2)
 {
     float resultado=0;
    if(operando2 != 0)
    {
        resultado= operando1/operando2;
    }
    else{
      printf("Error-No es posible dividir por cero\n");
      printf("\n========================================\n");
    }
    return resultado;
 }
 /**
   * @fn float Calcularmultiplicacion(float, float)
  * @brief Esta función recibe dos parametros que va a realizar la multiplicación del operando 1 y
  *  el operando 2
  *
  * @param operando1
  * @param operando2
  * @return retorna el producto de la multiplicación del operando 1 y operando 2
  */
 float Calcularmultiplicacion ( float operando1,float operando2)
 {
    float resultado;

    resultado= operando1*operando2;
    return resultado;
 }
 /**
   * @fn float CalcularFactorial(float)
  * @brief Esta función va a calcular el factorial de cada uno de los operando, primero del operando1
  * y luego del operando 2.
  * Primero verifico si el valor de entrada es 0 y si es 0 retorna 1, si no, realiza la operación teniendo
  * en cuenta los signos, positivo y negativo.
  * @param operando
  * @return retorna el resultado del factorialA y luego del factorailB
  */
  float CalcularFactorial(float operando)
 {
    float i=0;
    float resultado =1;

    if(operando==0) //verifico que si el numero ingresado es 0, el resultado tiene que ser 1
    {
        resultado=1; // El factorial de 0 es 1,
    }
    else if(operando >0)// el número ingresado tiene que ser >0
    {
        for(i=operando;i>1; i--)
        {
            resultado=resultado*i;
        }
    }
    else
    {
        for(i=operando; i<-1; i++)
        {
            resultado=resultado*i;
        }

    }

    return resultado;

    }
