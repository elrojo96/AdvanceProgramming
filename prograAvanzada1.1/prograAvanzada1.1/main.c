//
//  main.c
//  prograAvanzada1.1
//
//  Created by Luis Alfonso Rojo Sánchez on 15/08/17.
//  Copyright © 2017 Luis Alfonso Rojo Sánchez. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    
    int numeroEvaluar = 0;
    
    printf("Ingresa un número para saber si es primo: ");
    scanf("%d", &numeroEvaluar);
    
    int primo = 0;
    
    for(int i = 1; i <= numeroEvaluar; i++){
        
        if(numeroEvaluar % i == 0){
            primo++;
        }
        

    }
    
    if(primo == 2){
        printf("El numero es primo\n");
    }else{
        printf("El numero no es primo\n");
    }
    
    return 0;
}
