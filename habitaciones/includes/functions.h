/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   functions.h
 * Author: ezequiel
 *
 * Created on 13 de septiembre de 2019, 00:39
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define LENG_WORD 40
typedef struct{
    char nom[LENG_WORD];
    int edad;
    int DNI;
    char correo[LENG_WORD];
    int dias;
}INF_CL;
typedef struct{
    int ID;
    char estado;
    INF_CL cliente;
}ROOM;
void asignarRoom(FILE *room,int option,ROOM aux);
void llenarDatosCl(ROOM aux);
void initializeFile(FILE *room);
void freeRoom(FILE *room);
void reservarHabitacion(FILE *room);
char askReserva(char a);
char askFreeRoom(char a);
char askList(char a);
void showList(FILE *room);

#ifdef __cplusplus
}
#endif

#endif /* FUNCTIONS_H */

