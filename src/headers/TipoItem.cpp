#include "TipoItem.hpp"
#include <iostream>

TipoItem::TipoItem() {
    chave = -1; 
}

TipoItem::~TipoItem() {
    delete nave;
}

TipoItem::TipoItem(TipoChave c){
    chave = c;
}

TipoItem::TipoItem(TipoChave c, Nave* n){
    chave = c;
    nave = n;
    std::cout << "\nChave " << c << "Ponteiro Nave Criação: " << n << "Codigo nave: " << n->GetCodigo();
}

void TipoItem::SetChave(TipoChave c) {
    chave = c;
}

TipoChave TipoItem::GetChave(){
    return chave;
}


void TipoItem::SetNave(Nave* n) {
    nave = n;
}

Nave* TipoItem::GetNave(){
    return nave;
}

void TipoItem::Imprime(){
    std::cout << this->chave << "\n";
}