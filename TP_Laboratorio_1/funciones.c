#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void clean(void)
{
    system("cls");
}

void pauseClean(void)
{
    system("pause");
    system("cls");
}

void menu( int banderaDelA , int banderaDelB , float primerNumero , float segundoNumero )
{
    printf("Ingrese una opcion porfavor:\n");
    if(banderaDelA!=0)
    {
        printf("1-Ingresar 1er operando (A=%.2f)\n",primerNumero);
    }
    else
    {
        printf("1-Ingresar 1er operando (A=x)\n");
    }
    if(banderaDelB!=0)
    {
     printf("2-Ingresar 2do operando (B=%.2f)\n",segundoNumero);
    }
    else
    {
        printf("2-Ingresar 2do operando (B=x)\n");
    }
    printf("3-Calcular todas las operaciones\n");
    printf("4-Informar resultados\n");
    printf("5-Salir\n");
}

int preguntarOpcion(void)
{
    int opcion;
    scanf("%d",&opcion);
    return opcion;
}

float preguntarOpcionA(void)
{
    float primerNumero;
    printf("Ingrese el valor de A:\n");
    scanf("%f",&primerNumero);
    return primerNumero;
}

float preguntarOpcionB(void)
{
    float segundoNumero;
    printf("Ingrese el valor de B:\n");
    scanf("%f",&segundoNumero);
    return segundoNumero;
}

float sumarFunction( float primerNumero ,float segundoNumero )
{
    float suma;
    suma = primerNumero + segundoNumero;
    return suma;
}

float restarFunction( float primerNumero , float segundoNumero )
{
    float restar;
    restar = primerNumero -segundoNumero;
    return restar;
}

float multiplicarFunction( float primerNumero , float segundoNumero)
{
    float multiplicar;
    multiplicar = primerNumero * segundoNumero;
    return multiplicar;
}

float dividirFunction( float primerNumero , float segundoNumero)
{
    float dividir;
    dividir = primerNumero / segundoNumero;
    return dividir;
}

double escalarFunction( float numero )
{
    int i;
    double escalar = 1;
    for(i=numero;i>=1;i--)
    {
        escalar = escalar * i;
    }
    return escalar;
}

void printSumarResultados( float primerNumero , float segundoNumero , float sumaResultados)
{
     printf("El resultado de %.2f + %.2f es = %.2f\n",primerNumero,segundoNumero,sumaResultados);
}

void printRestarResultados( float primerNumero , float segundoNumero , float restaResultados )
{
    printf("El resultado de %.2f - %.2f es = %.2f\n",primerNumero,segundoNumero,restaResultados);
}

void printDividirResultados( float primerNumero , float segundoNumero , float dividirResultados )
{
    if(segundoNumero!=0)
    {
        printf("El resultado de %.2f / %.2f es = %.2f\n",primerNumero,segundoNumero,dividirResultados);
    }
    else
    {
        printf("La division no a podido realizarse ya que no se puede dividir un numero por 0\n");
    }
}
void printMultiplicarResultados(  float primerNumero , float segundoNumero , float multiplicarResultados )
{
    printf("El resultado de %.2f * %.2f es = %.2f\n",primerNumero,segundoNumero,multiplicarResultados);
}

void printEscalarResultados( float numero , double escalar )
{
    if(numero==0)
    {
        printf("El escalar de 0 es 1\n");
    }
    else
    {
        if(numero<0)
        {
            printf("No se puede realizar el escalar de un numero negativo\n");
        }
        else
        {
            printf("El escalar de %.2f es %.2f\n",numero,escalar);
        }
    }

}

int chequearNumeros( float primerNumero , float segundoNumero , float prevNumA , float prevNumB )
{
    int verified = 0;
    if(prevNumA==primerNumero&&prevNumB==segundoNumero)
    {
        verified = 1;
    }
    return verified;
}
