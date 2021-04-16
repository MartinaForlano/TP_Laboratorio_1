/**
*********************************************************************************************************
                                                                                                        *
Alumna: Forlano, Martina Fiorella.                                                                      *
Tema: "Trabajo Práctico n°1".                                                                           *
Profesor: Baus Christian.                                                                               *
División: 1A.                                                                                           *
                                                                                                        *
*********************************************************************************************************
                                                                                                        *
Enunciado                                                                                               *
    Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:            *
        1. Ingresar 1er operando (A=x)                                                                  *
        2. Ingresar 2do operando (B=y)                                                                  *
        3. Calcular todas las operaciones                                                               *
        a) Calcular la suma (A+B)                                                                       *
        b) Calcular la resta (A-B)                                                                      *
        c) Calcular la division (A/B)                                                                   *
        d) Calcular la multiplicacion (A*B)                                                             *
        e) Calcular el factorial (A!)                                                                   *
        4. Informar resultados                                                                          *
        a) “El resultado de A+B es: r”                                                                  *
        b) “El resultado de A-B es: r”                                                                  *
        c) “El resultado de A/B es: r” o “No es posible dividir por cero”                               *
        d) “El resultado de A*B es: r”                                                                  *
        e) “El factorial de A es: r1 y El factorial de B es: r2”                                        *
        5. Salir                                                                                        *
        • Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,        *
        que contenga las funciones para realizar las cinco operaciones.                                 *
        • En el menú deberán aparecer los valores actuales cargados en los operandos A y B              *
        (donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)                         *
        • Deberán contemplarse los casos de error (división por cero, etc)                              *
        • Documentar todas las funciones                                                                *
                                                                                                        *
*********************************************************************************************************
*/
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    //VARIABLES
    int opcion;
    float primerNumero;
    float segundoNumero;
    float prevNumA;
    float prevNumB;
    int banderaDelA = 0;
    int banderaDelB = 0;
    int banderaDelC = 0;
    float sumaResultados;
    float restaResultados;
    float dividirResultados;
    float multiplicarResultados;
    double escalarA;
    double escalarB;

    do{
        clean();
        menu(banderaDelA,banderaDelB,primerNumero,segundoNumero);
        opcion = preguntarOpcion();
        switch(opcion)
        {
            //OPCION 1
            case 1:
                clean();
                banderaDelA = 1;
                primerNumero = preguntarOpcionA();
                break;
            //OPCION 2
            case 2:
                clean();
                banderaDelB = 1;
                segundoNumero = preguntarOpcionB();
                break;
            //OPCION 3
            case 3:
                clean();
                if(banderaDelA==1&&banderaDelB==1)
                {
                    banderaDelC=1;
                    prevNumA = primerNumero;
                    prevNumB = segundoNumero;
                    sumaResultados = sumarFunction(primerNumero,segundoNumero);
                    restaResultados = restarFunction(primerNumero,segundoNumero);
                    dividirResultados = dividirFunction(primerNumero,segundoNumero);
                    multiplicarResultados = multiplicarFunction(primerNumero,segundoNumero);
                    escalarA = escalarFunction(primerNumero);
                    escalarB = escalarFunction(segundoNumero);
                    printf("Todas las operaciones fueron calculadas\n");
                }
                else
                {
                    printf("Debe ingresar ambos operadores, para realizar los calculos\n");
                }
                pauseClean();
                break;
            //OPCION 4
            case 4:
                clean();
                banderaDelC = chequearNumeros(primerNumero,segundoNumero,prevNumA,prevNumB);
                if(banderaDelA==1&&banderaDelB==1&&banderaDelC==1)
                {
                    printSumarResultados(primerNumero,segundoNumero,sumaResultados);
                    printRestarResultados(primerNumero,segundoNumero,restaResultados);
                    printDividirResultados(primerNumero,segundoNumero,dividirResultados);
                    printMultiplicarResultados(primerNumero,segundoNumero,multiplicarResultados);
                    printEscalarResultados(primerNumero,escalarA);
                    printEscalarResultados(segundoNumero,escalarB);
                }
                else
                {
                    if(banderaDelA==1&&banderaDelB==1&&banderaDelC==0)
                    {
                        printf("Debe ingresar primero la opcion 3\n");
                    }
                    else
                    {
                        printf("Debe ingresar ambos operadores, para mostrar los resultados\n");
                    }
                }pauseClean();
                break;
            //OPCION 5
            case 5:
                clean();
                break;

            default:
                clean();
                printf("La opcion ingresada no es valida\n");
                pauseClean();
                break;
        }
    }while(opcion!=5);
    return 0;
}
