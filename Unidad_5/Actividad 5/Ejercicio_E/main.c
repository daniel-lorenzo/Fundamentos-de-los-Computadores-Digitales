#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vec1[10], vec2[10];
    int i;
    printf("Ingrese 10 numeros:\n");
    for(i = 0; i < 10; i++){
        scanf("%f",&vec1[i]);
    }
    for(i = 0; i < 10; i++){
        vec2[i] = 2*vec1[i];
    }
    printf("\nMuestra el contenido:\n");
    printf("Pos.\tVector 1\tVector 2\n");
    for(i = 0; i < 10; i++){
        printf("%d:\t%8.2f\t%8.2f\n",i,vec1[i],vec2[i]);
    }

    return 0;
}

/****************************************************
UNLZ - Facultad de Ingenieria
Asignatura: Fundamentos de los Computadores Digitales
Unidad 5 - Estructuras Vectores y Matrices
Alumno: Daniel Antonio Lorenzo
EJERCICIO E
Cree un programa que pida 10 números por teclado, y
guárdelos en un vector.
Luego guárdelos en otro vector multiplicando por 2.
*****************************************************/
