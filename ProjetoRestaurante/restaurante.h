#include <stdio.h>
#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#define pLIM 1000
#define MAX_TEXT 100
#define flid "ids.txt"
#define flpedido "flpedido.txt"


typedef struct Pedido
{
    int id;
    int mesa;
    int tempo;
    char * texto;
}Pedido;
typedef struct Pedidos
{
    Pedido * pedi[pLIM];
    int top;
}Pedidos;

Pedido *newPedido(char * texto, int mesa);
// O ID sera preenchido automaticamente com o menor valor disponıvel.

Pedido * lePedido();
// Nesta funcao, os dados do pedido serao lidos do teclado. Esta funcao deve, obrigatoriamente chamar newPedido.

void addPedido(Pedido * p);
//Esta fun¸c˜ao adiciona um novo pedido. Note que n˜ao h´a uma vari´avel do tipo P edidos. Isso porque o novo pedido n˜ao ficar´a em mem´oria e sim em arquivo.

Pedidos * listaPedidos();
 
Pedido * removeMaisAntigo();
 // Esta fun¸c˜ao remove da lista de pedidos o pedido com menor ID. O pedido deve ser impresso na tela. Deve ser impresso o tempo transcorrido entre a cria¸c˜ao e a remo¸c˜ao do pedido. O pedido removido ´e devolvido por meio de um return.
 #endif