#include <stdio.h>
int num [4][3];
int fila, columna;
void solicitar () {
    for (fila=0;fila<=3;fila++){
        for (columna=0;columna<=2;columna++){
        printf ("Ingrese un valor [%i][%i] - ", fila, columna);
        scanf ("%i", &num[fila][columna]);
        }
    }
    for (fila=0;fila<=3;fila++){
        for (columna=0;columna<=2;columna++){
            printf ("%i | ", num[fila][columna]);
        }
        printf ("\n");
    }
}
void multiplos (){
    for (fila = 0; fila <= 3; fila++){
        // Corregido: columna = 0
        for (columna = 0; columna <= 2; columna++){ 
            // Corregido: == 0
            if (num[fila][columna] % 10 == 0){ 
                printf ("%i | ", num[fila][columna]);
            }
        }
    }
    printf("\n");
}
int main () {
    solicitar ();
    puts ("Multiplos de 10");
    multiplos ();
    return 0;
}