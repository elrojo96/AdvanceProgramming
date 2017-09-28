//
//  main.c
//  prograAvanzada1
//
//  Created by Luis Alfonso Rojo Sánchez on 15/08/17.
//  Copyright © 2017 Luis Alfonso Rojo Sánchez. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int numero;
    printf("Ingresa un número para realizar la secuencia de Fibonacci: ");
    scanf("%d", &numero);
    
    int numero1 = 0;
    int numero2 = 1;
    
    printf("%d", numero1);
    
    for(int i = 1; i <= numero; i++){
        
        printf(" ");
        printf("%d", numero2);
        
        int temporal = numero1 + numero2;
        
        numero1 = numero2;
        
        numero2 = temporal;
        
    }
    
    printf("\n");
    
    return 0;
}
