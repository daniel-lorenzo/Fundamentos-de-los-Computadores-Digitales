#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[50],i;
    for(i = 0; i < 50; i++){
        vec[i] = i;
    }
    for(i = 49; i >= 0; i--){
        printf("%d ",vec[i]);
    }

    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 5 - Estructuras Vectores y Matrices
Alumno: Daniel Antonio Lorenzo
EJERCICIO B
Cree y rellene un vector con los primeros 50 números
enteros y luego muéstrelos en pantalla en orden
descendente.
*****************************************************/
