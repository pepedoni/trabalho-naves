#include "FilaEncadeada.hpp"
#include <cstddef>

FilaEncadeada::FilaEncadeada() : Fila() {
    this->frente = new TipoCelula;
    this->tras = this->frente;
}

FilaEncadeada::~FilaEncadeada()
{
    Limpa();
    delete this->frente;
}

void FilaEncadeada::Enfileira(TipoItem item) {
    TipoCelula *nova;
    nova = new TipoCelula();
    nova->item = item;
    this->tras->prox = nova;
    this->tras = nova;
    this->tamanho++;
}

TipoItem FilaEncadeada::Desenfileira() {
    TipoCelula *p;
    TipoItem aux;
    if (this->tamanho == 0) throw "Fila está vazia!";
    aux = this->frente->prox->item;
    p = this->frente;
    this->frente = this->frente->prox;
    delete p;
    this->tamanho--;
    return aux;
}

void FilaEncadeada::Limpa(){
    TipoCelula *p;
    p = this->frente->prox;
    while(p !=  NULL){
        this->frente->prox = p->prox;
        delete p;
        p = this->frente->prox;
    }
    this->tamanho = 0;
    this->tras = this->frente;
}

void FilaEncadeada::Imprime() {
    TipoCelula *p;
    p = this->frente->prox;
    while(p != NULL){
        p->item.Imprime();
        p = p->prox;
    }
}