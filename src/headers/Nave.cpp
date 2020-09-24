#include "./Nave.hpp"
#include <iostream>

Nave::Nave() {};


Nave::Nave(int codigo_nave) {
    this->codigo = codigo_nave;
};

int Nave::GetCodigo() {
    return this->codigo;
};

void Nave::SetCodigo(int codigo_nave) {
    this->codigo = codigo_nave;
};

void Nave::Combate() {
    std::cout << "nave " << GetCodigo() << " em combate \n"; 
};

void Nave::Avaria() {
    std::cout << "nave " << GetCodigo() << " avariada \n"; 
};

void Nave::Consertada() {
    std::cout << "nave " << GetCodigo() << " consertada \n"; 
};
