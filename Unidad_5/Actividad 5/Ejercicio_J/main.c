#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vectc[10];
    int i;
    printf("Ingrese diez caracteres:\n");
    for(i = 0; i < 10; i++){
        scanf(" %c%*c",&vectc[i]);
    }
    printf("\nLos caracteres ingresados son:\n");
    for(i = 0; i < 10; i++){
        printf("%c ",vectc[i]);
    }
    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 5 - Estructuras Vectores y Matrices
Alumno: Daniel Antonio Lorenzo
EJERCICIO J
Cree un vector de caracteres de dimensión 10. Y a
continuación ingrese por teclado los valores carácter
a carácter utilizando un ciclo for y la función
scanf.
*****************************************************/
