#include <stdio.h>
#include <stdlib.h>
// * = operador de inacceso
void funcion(int*);

int main()
{
    int numero = 4;
    printf("el numero antes de modificar es: %d");
    funcion(&numero);
    printf("\nel numero despues de modificar es: %d");

    return 0;
}

void funcion(int* numero)
{
    //int numero;
    *numero = 100;
   //return numero;
}

