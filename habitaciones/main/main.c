/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ezequiel
 *
 * Created on 13 de septiembre de 2019, 00:16
 */

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
 
int main(int argc, char** argv) {
    char answer='n';
    FILE *room=(ROOM*)malloc(sizeof(ROOM)*100);
    room=fopen("hoteles","wb+");
    if(room==NULL){
        printf("Error al iniciar el archivo \n");
        exit(EXIT_FAILURE);
    }
    printf("Everything's okey \n");
    initializeFile(room);
    
    do{
        answer=askReserva(answer);
        if(answer=='s'){
           reservarHabitacion(room);
           
        }
        answer=askFreeRoom(answer);
        if(answer=='s'){
            freeRoom(room);
        }
        answer=askList(answer);   
        if(answer=='s'){
            showList(room);
        }

    }
    while(answer=='s'||answer=='n');
    printf("hola");
    fclose(room);
    return (EXIT_SUCCESS);
}

