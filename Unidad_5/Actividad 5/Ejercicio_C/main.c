#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[50],i;
    for(i = 0; i < 50; i++){
        vec[i] = 2*i + 2;
    }
    for(i = 0; i < 50; i++){
        printf("%d ",vec[i]);
    }
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 5 - Estructuras Vectores y Matrices
Alumno: Daniel Antonio Lorenzo
EJERCICIO C
Cree y rellene un vector con los números pares
comprendidos entre 1 y 100 y luego muéstrelos en
pantalla en orden ascendente.
*****************************************************/
