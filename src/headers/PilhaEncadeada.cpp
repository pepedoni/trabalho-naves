#include "./PilhaEncadeada.hpp"
#include <iostream>

PilhaEncadeada::PilhaEncadeada() : Pilha() {
    this->topo = NULL;
}

PilhaEncadeada::~PilhaEncadeada(){
    Limpa();
}

void PilhaEncadeada::Empilha(TipoItem item){
    TipoCelula *nova;
    nova = new TipoCelula();
    nova->item = item;
    nova->prox = this->topo;
    this->topo = nova;
    this->tamanho++;
};

TipoItem PilhaEncadeada::Desempilha(){
    std::cout << "Desempilhando" << this->topo;
    TipoItem aux; 
    TipoCelula *p;
    if(this->tamanho == 0) throw "A pilha está vazia!";
    p = this->topo;
    aux = p->item;
    this->topo = topo->prox;
    delete p;
    this->tamanho--;
    return aux;
};

void PilhaEncadeada::Limpa(){
    while(!Vazia()) Desempilha();
}

void PilhaEncadeada::Imprime() {
    TipoCelula *p;
    p = this->topo;
    while(p != NULL){
        p->item.Imprime();
        p = p->prox;
    }
}
