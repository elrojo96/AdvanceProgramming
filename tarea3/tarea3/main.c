//
//  main.c
//  tarea3
//  A01113049
//  Created by Luis Alfonso Rojo Sánchez on 21/08/17.
//  Copyright © 2017 Luis Alfonso Rojo Sánchez. All rights reserved.
//

#include <stdio.h>

void llenarMatriz(int matriz[2][2]){
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            
            int temporal = 0;
            
            printf("[%d][%d]: ", i, j);
            scanf(" %d", &temporal);
            
            matriz[i][j] = temporal;
        }
    }
    
}

void operacionesMatriz(int matriz1[2][2], int matriz2[2][2], int matrizSuma[2][2], int matrizResta[2][2], int matrizMultiplicacion[2][2]){
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrizSuma[i][j] = matriz1[i][j] + matriz2[i][j];
            matrizResta[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
    
    matrizMultiplicacion[0][0] = (matriz1[0][0] * matriz2[0][0]) + (matriz1[0][1] * matriz2[1][0]);
    matrizMultiplicacion[0][1] = (matriz1[0][0] * matriz2[0][1]) + (matriz1[0][1] * matriz2[1][1]);
    matrizMultiplicacion[1][0] = (matriz1[1][0] * matriz2[0][0]) + (matriz1[1][1] * matriz2[1][0]);
    matrizMultiplicacion[1][1] = (matriz1[1][0] * matriz2[0][1]) + (matriz1[1][1] * matriz2[1][1]);
}

void imprimirMatriz(int matriz[2][2]){
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("[%d][%d]: %d\n", i, j, matriz[i][j]);
        }
    }
    
}

int main(int argc, const char * argv[]) {
    
    int matriz1[2][2];
    int matriz2[2][2];
    
    printf("Ingresa los datos de la matriz 1:\n");
    llenarMatriz(matriz1);
    
    printf("Ingresa los datos de la matriz 2:\n");
    llenarMatriz(matriz2);
    
    int matrizSuma[2][2];
    int matrizResta[2][2];
    int matrizMultiplicacion[2][2];
    
    printf("Realizando suma, resta y mulriplicación de matrices...\n");
    
    operacionesMatriz(matriz1, matriz2, matrizSuma, matrizResta, matrizMultiplicacion);
    
    printf("Imprimiendo matriz de suma\n");
    imprimirMatriz(matrizSuma);
    
    printf("Imprimiendo matriz de resta\n");
    imprimirMatriz(matrizResta);
    
    printf("Imprimiendo matriz de multiplicacion\n");
    imprimirMatriz(matrizMultiplicacion);
    
    return 0;
}
