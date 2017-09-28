//
//  main.c
//  practice4
//  A01113049
//  Created by Luis Alfonso Rojo Sánchez on 22/08/17.
//  Copyright © 2017 Luis Alfonso Rojo Sánchez. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define MAX_NAME_SIZE 256

int main(int argc, const char * argv[]) {
    
    char agentName[50];
    char agentLastName[50];
    int  agentAge = 0;
    char agentGender;
    char agentMission[12];
    
    
    printf("Enter your name: ");
    fgets (agentName, MAX_NAME_SIZE, stdin);
    
    printf("Enter your last name: ");
    fgets (agentLastName, MAX_NAME_SIZE, stdin);
    
    
    printf("Enter your age: ");
    scanf(" %d", &agentAge);
    
    
    printf("Enter your gender: ");
    scanf(" %c", &agentGender);
    
    printf("Enter your mission: ");
    scanf(" %s", &agentMission[0]);
    
    printf(" ---------- AGENT INFORMATION ----------\n");
    
    printf(" Name: %s", agentName);
    printf(" Last name: %s", agentLastName);
    printf(" Age: %d\n", agentAge);
    printf(" Gender: %c\n", agentGender);
    printf(" Mission: %s\n", agentMission);
    
    printf(" ---------------------------------------\n");
    
    return 0;
}
