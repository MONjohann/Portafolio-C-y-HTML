#include <stdio.h>
   int num1, num2;
void primeraFuncion(){
    puts("Ingresa 2 valores");
    scanf ("%i %i", &num1, &num2);
    printf ("El resultado de la suma es %i", (num1+num2));
}
void resta(){
    puts ("Ingresa 2 valores");
    scanf ("%i %i", &num1, &num2);
    printf ("La resta de sus numeros es: %i", (num1-num2));
}
void multiplicacion(){
    puts ("Ingresa 2 valores");
    scanf ("%i %i", &num1, &num2);
    printf ("La multiplicacion de sus numeros es: %i", (num1*num2));
}
void division (){
    puts ("Ingresa 2 valores");
    scanf ("%i %i", &num1, &num2);
    printf ("La division de sus numeros es: %i", (num1/num2));
}
void modulo (){
    puts ("Ingresa 2 valores");
    scanf ("%i %i", &num1, &num2);
    printf ("El modulo de sus numeros es: %i", (num1%num2));
}
void menu(){
    int opcion;
    printf ("1- Suma\n2- Resta\n3- Multiplicacion\n4- Division\n5- Modulo\nElige una opcion\n");
    scanf ("%i", &opcion);
    switch (opcion){
        case 1:
        primeraFuncion ();
        break;
        case 2:
        resta ();
        break;
        case 3:
        multiplicacion ();
        break;
        case 4:
        division ();
        break;
        case 5:
        modulo ();
        break;
        default:
        puts ("La opcion no existe");
    }
}
void repeticion (){
    do {
        menu();
        puts ("\nIngresa un numero distinto que 0 para repetir");
        scanf ("%i", &num1);
    }while(num1!=0);
}
    int main(){
    repeticion ();
    return 0;
}