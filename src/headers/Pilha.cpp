#include "./Pilha.hpp"

bool Pilha::Vazia() {
  return tamanho == 0;
};

int Pilha::GetTamanho() {
  return tamanho;
};