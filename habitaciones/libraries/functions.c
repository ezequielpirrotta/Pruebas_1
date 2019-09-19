/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "functions.h"


void llenarDatosCl(ROOM aux){
    aux.estado='O';
    printf("Ingrese nombre del cliente: ");
    scanf("%s",aux.cliente.nom);
    printf("Ingrese su DNI: ");
    scanf("%i",&aux.cliente.DNI);
    printf("Ingrese su edad: ");
    scanf("%i",&aux.cliente.edad);
    printf("Ingrese su e-mail: ");
    scanf("%s",aux.cliente.correo);
    printf("Dias de hospedaje: ");
    scanf("%d",&aux.cliente.dias);
}
void asignarRoom(FILE *room,int option,ROOM aux){
    int nro=0;
    bool sorted=true;
    ROOM *aux2;
    aux2=(ROOM*)malloc(sizeof(ROOM));
    int i=0;
    switch(option){
        case 0:
            printf("Ingrese una habitacion: ");
            scanf("%d",&nro);
            aux.ID=nro;
            fseek(room,sizeof(ROOM)+(nro-1),SEEK_SET);
            fwrite(&aux,sizeof(ROOM),1,room);
            break;
        case 1:
           
            fread(aux2,sizeof(ROOM),1,room);
            while(sorted){
                if((aux2+i)->estado=='L'){
                   fwrite(&aux,sizeof(ROOM),1,room);
                   sorted=false;
                }
                i++;
                
            }
            break;
    }       
    
    
}


void initializeFile(FILE *rooms){
    ROOM h; 
    h.estado='L';
    for(int i=0;i<100;i++){
        h.estado=i+1;
        fwrite(&h,sizeof(ROOM),1,rooms);
    }
}
char askReserva(char a){
    printf("¿Desea reservar una habitacion?[s/n]: ");
    scanf(" %c",&a);
    return  a;
}
void reservarHabitacion(FILE *room){
    ROOM aux;
    llenarDatosCl(aux);
    int option=-1;
    printf("Elija una opcion: automático(1) o personal(0) \n");
    scanf("%d",&option);
    asignarRoom(room,option,aux);
}
char askFreeRoom(char a){
    printf("¿Desea desocupar una habitacion?[s/n]: ");
    scanf(" %c",&a);
    return a;
}

void freeRoom(FILE *room){
    int nro;
    ROOM aux;
    printf("Ingrese una habitacion: ");
    scanf("%d",&nro);
    aux.ID=nro;
    aux.estado='L';
    fseek(room,sizeof(ROOM)+(nro-1),SEEK_SET);
    fwrite(&aux,sizeof(ROOM),1,room);
    
}
char askList(char a){
    printf("¿Quiere ver la lista de habitaciones?[s/n]: ");
    scanf(" %c",&a);
    return a;
}
void showList(FILE *room){
    printf("fin \n");
}