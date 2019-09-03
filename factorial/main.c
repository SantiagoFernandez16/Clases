#include <stdio.h>
#include <stdlib.h>

unsigned int factorial(int);
/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int main()
{
    int numero=12;
    int resultado=1;
    int i;

    for(i=numero;i>=1;i--)
    {
        resultado=resultado*i;
    }
    printf("%d",resultado);
    return 0;
}

unsigned int factorial(int numero)
{
    unsigned int resultado;
    if(numero==0)
    {
        resultado=1;
    }
    else
    {
        resultado=numero*factorial(numero-1);
    }
    return resultado;
}
