/*
 Advance Programming
 Homework #2
 Luis Alfonso Rojo Sánchez
 A01113049
*/

#include <stdio.h>
#include <float.h>

int main(int argc, const char * argv[]) {
    
    int variableEntera;
    char variableCaracter;
    double variableDouble;
    
    printf("Ingresa una variable entera: ");
    scanf(" %d", &variableEntera);
    
    printf("Ingresa una variable de tipo caracter: ");
    scanf(" %c", &variableCaracter);
    
    printf("Ingresa una variable doble: ");
    scanf(" %lf", &variableDouble);
    
    printf("Your integer %d storage size is %lu bytes.\n", variableEntera, sizeof(variableEntera));
    printf("Your char %c storage size is %lu bytes. And I can read it as %c or as %d. \n", variableCaracter, sizeof(variableCaracter), variableCaracter, variableCaracter);
    printf("Your double %f storage size is %lu bytes, I can read any number from %.10e to %.10e in this data type.\n", variableDouble, sizeof(variableDouble), FLT_MIN, FLT_MAX);
    
    return 0;
}
