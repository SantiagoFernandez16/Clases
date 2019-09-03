#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define T 10
int main()
{
    int vectorDeNumeros[T]={7,-5,5,-6,-1,-4,10,5,4,-1};
    int i;
    int contadorDePositivos = 0;
    int sumaDePositivos = 0;
    float promedioPositivos;
    int maximo;
    int minimo;
    int flag=0;
    int opcion;

    do
    {
        printf("1. Cargar numeros\n2. Mostrar todo\n3. Mostrar negativos\n4. Mostrar promedio positivos\n5. Mostrar maximo\n6. Mostrar minimo\n7. Salir\n");
        printf("Elija Una Opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                    printf("\tCARGA DE DATOS\n");
                    for(i=0; i<T; i++)
                    {
                        printf("Ingrese un numero: ");
                        scanf("%d", &vectorDeNumeros[i]);
                    }
                break;
            case 2:
                    printf("\tMUESTRO EL VECTOR\n");
                    for(i=0; i<T; i++)
                    {
                        printf("%d\n", vectorDeNumeros[i]);
                    }
                break;
            case 3:
                    printf("\n\n\tMUESTRO SOLO LOS NEGATIVOS\n");
                    for(i=0; i<T; i++)
                    {
                        if(vectorDeNumeros[i]<0)
                        {
                           printf("%d\n", vectorDeNumeros[i]);
                        }
                    }
                break;
            case 4:
                    for(i=0; i<T; i++)
                    {
                        if(vectorDeNumeros[i]>=0)
                        {
                            sumaDePositivos += vectorDeNumeros[i];
                            contadorDePositivos++;
                        }
                    }
                    promedioPositivos = (float)sumaDePositivos/contadorDePositivos;
                    printf("Suma: %d -- Cantidad %d\n\n", sumaDePositivos, contadorDePositivos);
                    printf("\n\n\PROMEDIO DE POSITIVOS: %f\n\n", promedioPositivos);
                break;
            case 5:
                    printf(" EL MAXIMO: %d \n\n", maximo);
                     for(i=0;i<T;i++)
                     {
                         if(vectorDeNumeros[i]==maximo)
                         {
                             printf("%d", i);
                         }
                     }
                break;
            case 6:
                    printf(" EL MINIMO: %d \n\n", minimo);
                    for(i=0;i<T;i++)
                    {
                        if(vectorDeNumeros[i]==minimo)
                        {
                            printf("%d", i);
                        }
                     }
                break;
            case 7:
                //continuar = 'n';
                printf("\nAdios\n");
                break;

        }

    system("pause");
    system("cls");
    }while(opcion=!7);


    printf("\tCARGA DE DATOS\n");
    for(i=0; i<10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vectorDeNumeros[i]);
    }

    printf("\tMUESTRO EL VECTOR\n");
    for(i=0; i<10; i++)
    {
        printf("%d\n", vectorDeNumeros[i]);
    }
    printf("\n\n\tMUESTRO SOLO LOS NEGATIVOS\n");
    for(i=0; i<10; i++)
    {
        if(vectorDeNumeros[i]<0)
        {
           printf("%d\n", vectorDeNumeros[i]);
        }

    }

    for(i=0; i<10; i++)
    {
        if(vectorDeNumeros[i]>=0)
        {
            sumaDePositivos += vectorDeNumeros[i];
            contadorDePositivos++;
        }
    }
    promedioPositivos = (float)sumaDePositivos/contadorDePositivos;

    printf("Suma: %d -- Cantidad %d\n\n", sumaDePositivos, contadorDePositivos);


     printf("\n\n\PROMEDIO DE POSITIVOS: %f\n\n", promedioPositivos);

    for(i=0;i<10;i++)
    {
        if(flag==0 || vectorDeNumeros[i]>maximo)
        {
            maximo=vectorDeNumeros[i];
        }
        if(flag==0 || vectorDeNumeros[i]<minimo)
        {
            minimo=vectorDeNumeros[i];
        }
        flag=1;
    }

     printf(" EL MAXIMO: %d \n\n", maximo);

     for(i=0;i<10;i++)
     {
         if(vectorDeNumeros[i]==maximo)
         {
             printf("%d", i);
         }
     }
     printf(" EL MINIMO: %d \n\n", minimo);

     for(i=0;i<10;i++)
     {
         if(vectorDeNumeros[i]==minimo)
         {
             printf("%d", i);
         }
     }


    return 0;
}
