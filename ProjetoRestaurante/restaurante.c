#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "restaurante.h"

void addID(int id){
    
    FILE * fl;

    fl = fopen(flid, "w");

    fprintf(fl, "%d", id);

    fclose(fl);
}
int pegaID(){
    int id = 0;
    FILE * fl;
    fl = fopen(flid, "r");
    if(fl == NULL){
        addID(id);
    }else{
        fscanf(fl, "%d", &id);
        addID(++id);
    }
    fclose(fl);
    return id;
}

Pedido * newPedido(char * texto, int mesa){
    Pedido * novo = malloc(sizeof(Pedido));
    
    novo->id = pegaID();
    strcpy(novo->texto, texto);
    novo->mesa = mesa;
    novo->tempo = time(NULL);

    return novo;
}
Pedido * lePedido(){
    int mesa;
    char texto[MAX_TEXT];

    printf("Digite seu pedido: ");
    scanf("%s", &texto);
    printf("\n");
    printf("Qual mesa deseja: ");
    scanf("%d", &mesa);
    prinf("\n");

    return newPedido(texto, mesa);
}
void addPedido(Pedido * p){
    FILE * fl;

    fl = fopen(flpedido, "w");

    
}