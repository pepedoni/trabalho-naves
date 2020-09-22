#include "./PilhaArranjo.hpp"
#include "./Nave.hpp"

PilhaArranjo::PilhaArranjo() : Pilha()
{
    topo = -1;
}

void PilhaArranjo::Empilha(Nave* item){
    if(tamanho == MAXTAM)
    throw "A pilha está cheia!";
    topo++;
    itens[topo] = item;
    tamanho++;
};

Nave* PilhaArranjo::Desempilha(){
    Nave* aux;
    if(tamanho == 0)
    throw "A pilha está vazia!";
    aux = itens[topo];
    topo--;
    tamanho--;
    return aux;;
};

void PilhaArranjo::Limpa(){
    topo = -1;
    tamanho = 0;
};