/*
 ============================================================================
 Name        : TP1SSilvero.c
 Author      : Susana Silvero Aguirre.
 Version     :
 Copyright   : Your copyright notice
 Description : TP1-Calculadora.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main(void) {//declaración de las variables.
	    float PrimerOperando;
	    float SegundoOperando=0;
	    int Opcion;

	    setbuf(stdout, NULL);

	    float ResultadoSuma;
	    float ResultadoResta;
	    float ResultadoDivision;
	    float ResultadoMultiplicacion;
	    int ResultadoFactorialA;
	    int ResultadoFactorialB;

	    //inicialzar variables.
	    ResultadoSuma=0;
	    ResultadoResta=0;
	    ResultadoDivision=0;
	    ResultadoMultiplicacion=0;
	    ResultadoFactorialA=1;
	    ResultadoFactorialB=1;

      /**
       * @brief Muestra el menu de la calculadora, en el primer y segundo operando
       * entra las variables del primer y segundo operando.
       */
	    do{
	        printf("CALCULADORA-MENU PRINCIPAL\n");
	        printf("1. INGRESAR 1er OPERANDO.%.2f\n",PrimerOperando);
	        printf("2. INGRESAR 2do OPERANDO.%.2f\n",SegundoOperando);
	        printf("3. CALCULAR TODAS LAS OPERACIONES:\n");
	        printf("a)Sumar.\nb)Resta.\nc)División.\nd)Multiplicación.\ne)Factorial (A y B)\n\n");
	        printf("4. INFORMAR RESULTADOS.\n\n5.SALIR.\n");
	        printf("======================================================\n");
	        printf("Ingresar Opcion del menu (1 al  5): ");
	        scanf("%d", &Opcion);
	        while(Opcion != 1 && Opcion !=2 && Opcion!=3 && Opcion !=4 && Opcion!=5)
	        {//válido las opciones del menu
	            printf("Error-Ingresar Opcion del menu: ");
	            scanf("%d", &Opcion);
	        }
            /**
             * @brief muestra el primer y segundo operando
             */
	        switch(Opcion)
	        {
	           case 1:
	           printf("INGRESAR 1er OPERANDO: ");
	           scanf("%f", &PrimerOperando);
	           break;
	           case 2:
	           printf("======================================================\n");
	           printf("INGRESAR 2do OPERANDO: ");
	           scanf("%f", &SegundoOperando);
	           printf("======================================================\n");
	           break;

	           case 3:
	            // Se imprimen las operaciones a realizar con los operando AYB.
	           printf("======================================================\n");
	           printf(" a)Sumar:(%.2f+%.2f)\n",PrimerOperando,SegundoOperando);
	           printf(" b)Restar:(%.2f-%.2f)\n",PrimerOperando,SegundoOperando);
	           printf(" c)Dividir:(%.2f/%.2f)\n",PrimerOperando,SegundoOperando);
	           printf(" d)Multiplicar:(%.2f*%.2f)\n",PrimerOperando,SegundoOperando);
	           printf(" e)Factorial de: (%.2f y %.2f)\n\n",PrimerOperando,SegundoOperando);
	           printf("\n======================================================\n");
	           /**
	            * @brief Se invocan o se llaman a las funciones con las distintas operaciones
	            * que deben ejecutar.
	            *
	            */
	           ResultadoSuma=CalcularSuma(PrimerOperando, SegundoOperando);
	           ResultadoResta=CalcularResta(PrimerOperando, SegundoOperando);
	           ResultadoDivision=CalcularDivision(PrimerOperando, SegundoOperando);
	           ResultadoMultiplicacion= Calcularmultiplicacion ( PrimerOperando,SegundoOperando);
	           ResultadoFactorialA= CalcularFactorial(PrimerOperando);
	           ResultadoFactorialB=CalcularFactorial(SegundoOperando);
	           break;
	           case 4:
	        	   /**
	        	    * @brief Se imprimen los resultados
	        	    */
	           printf("======================================================\n");
	           printf("El resultado de la suma de: %.2f+%.2f = %.2f\n",PrimerOperando,SegundoOperando,ResultadoSuma);
	           printf("El resultado de la resta de: %.2f-%.2f = %.2f\n",PrimerOperando,SegundoOperando, ResultadoResta);
	           printf("El resultado de la división de: %.2f/%.2f = %.2f\n",PrimerOperando,SegundoOperando, ResultadoDivision);
	           printf("El resultado de la multiplicación de: %.2f*%.2f = %.2f\n",PrimerOperando,SegundoOperando,ResultadoMultiplicacion);
	           printf("El resultado del factorial A es: %.2f = %d\n",PrimerOperando, ResultadoFactorialA);
	           printf("El resultado del factorial B es: %.2f = %d\n",SegundoOperando, ResultadoFactorialB);
	           printf("======================================================\n");
	           //printf("Ingresar Opcion del menu: ");
	           break;

	        }

	    }while(Opcion!= 5);




	return EXIT_SUCCESS;
}
