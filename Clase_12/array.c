#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define false 0
#define true 1

int array_mostrar(int* pArray, int limite)
{
    int i;
    for(i=0;i<limite;i++)
    {
        printf("\nIndex:%d - Value:%d - Add: %p",i,pArray[i],&pArray[i]);

    }
    return 0;
}

/*int array_calcularMaximo(int* pArray, int limite, int* pMaximo)
{
    int retorno=-1;
    int i;

    int maximo;
    int flagPrimerMaximo = false;

    if(pArray != NULL && limite > 0)
    {

        for(i=0;i<limite;i++)
        {
            if(pArray[i] != DATO_INVALIDO)
            {
                if(flagPrimerMaximo == false)
                {
                    maximo = pArray[i];
                    flagPrimerMaximo = true;
                }
                else if(pArray[i] > maximo)
                {
                    maximo = pArray[i];
                }
            }
        }

        if(flagPrimerMaximo == 0)
        {
            retorno = -2;
        }
        else
        {
            retorno = 0;
        }
    }
    return retorno;
}

*/

int array_init(int* pArray, int limite, int valor)
{
    int retorno=-1;
    int i;
    if(pArray != NULL && limite > 0)
    {
        for(i=0;i<limite;i++)
        {
            pArray[i] = valor;
        }
        retorno = 0;
    }
    return retorno;
}


int array_ordenar(int* pArray, int limite, int orden)
{
    int retorno=-1;
    int j;
    int indiceMinimo;
    if(pArray != NULL && limite > 0)
    {
        for(j=0;j<limite - 1;j++)
        {
           array_minimoDesde(pArray,limite,j,&indiceMinimo);
           array_swap(&pArray[j],&pArray[indiceMinimo]);
           //array_swap(pArray+j,pArray+indiceMinimo);
        }
        retorno = 0;
    }
    return retorno;
}


int array_minimoDesde(  int* pArray, int limite,
                        int desde, int* pMinimo)
{
    int retorno=-1;
    int i;
    int auxiliarValorMinimo;
    int auxiliarIndiceMinimo;

    if(pArray != NULL && limite > 0 && limite >= desde && pMinimo != NULL)
    {
        for(i=desde;i<limite;i++)
        {
            if(i == desde || pArray[i] < auxiliarValorMinimo)
            {
                auxiliarValorMinimo  = pArray[i];
                auxiliarIndiceMinimo = i;
            }
        }
        *pMinimo = auxiliarIndiceMinimo;
        retorno = 0;
    }
    return retorno;
}

void array_swap(int* elementoA,int* elementoB)
{
    int auxiliar;

    auxiliar = *elementoA;
    *elementoA = *elementoB;
    *elementoB = auxiliar;
}




int array_ordenar2(int* pArray, int limite, int orden)
{
    int flagSwap;
    int retorno=-1;
    int j;
    if(pArray != NULL && limite - 1 > 0)
    {
        do
        {
            flagSwap = 0;
            for(j=0;j<limite-1;j++)
            {
                if((orden == 0 && pArray[j] > pArray[j+1]) || (orden == 1 && pArray[j] < pArray[j+1]))
                {
                    flagSwap = 1;
                    array_swap(&pArray[j],&pArray[j+1]);
                }

            }

        }while(flagSwap);

        retorno = 0;

    }
    return retorno;
}


void bubbleSort(int array[],int size)//Ordenamiento por método burbujeo
{
    int i;
    int j;
    int auxiliar;

    for(i = 0; i < size - 1;i++)
    {
        for(j = 1 + 1;j < size; j++)
        {
            if(array[i] > array[j])
            auxiliar = array[i];
            array[i] = array[j];
            array[j] = auxiliar;
        }
    }
}

void insertionSort(int array[], int size)
{
    int i;
    int j;
    int auxiliar;


    for(i = 1; i < size ; i++)
    {
        auxiliar = array[i];//Valor actual a ser comaprado
        j = 1;
        while(j > 0 && auxiliar < array[j - 1])//Compara el dato de la posición del auxiliar con el dato de la posicion del array - 1
        {
            array[j] = array[j - 1];
            j--;

        }
        array[j] = auxiliar;//Se escribe el dato ordenado guardado en auxiliar sobre la posicion del del array

    }



}


void insertionSortString(int array[], int size)
{
    int i;
    int j;
    int auxiliar;


    for(i = 1; i < size ; i++)
    {
        auxiliar = array[i];//Valor actual a ser comaprado
        j = 1;
        while(j > 0 && auxiliar < array[j - 1])//Compara el dato de la posición del auxiliar con el dato de la posicion del array - 1
        {
            array[j] = array[j - 1];
            j--;

        }
        array[j] = auxiliar;//Se escribe el dato ordenado guardado en auxiliar sobre la posicion del del array

    }



}












