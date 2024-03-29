#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, aux;
    n = 5;      // tamaño del vector
    int vector[n];
    /* inicializa el vector */
    printf("Ingrese cinco numeros enteros:\n");
    for(i=0;i<n;i++){
        scanf("%d",&vector[i]);
    }
    /* ordenamiento decreciente por método burbuja */
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1; j++){
            if(vector[j] < vector[j+1]){
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
            }
        }
    }
    printf("\nVector ordenado en forma descendente:\n");
    /* muestra el vector ordenado */
    for(i = 0; i < n; i++){
        printf("%d\n",vector[i]);
    }
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 5 - Estructuras Vectores y Matrices
Alumno: Daniel Antonio Lorenzo
EJERCICIO H
Cree un programa que pida 5 números por teclado, y
guárdelos en un vector. Luego ordénelos en forma
descendente, y al terminar imprima el vector ordenado.
*****************************************************/
