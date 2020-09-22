#include <cstdio> // em C substituir por #include <stdio.h>
#include <iostream>
#include "headers/PilhaArranjo.hpp" //um exemplo de como incluir cabeçalhos de outros arquivos criados
#include "headers/Nave.hpp"

using namespace std;
int main() {
  int num_frotas;
  scanf("%d",&num_frotas);
  int i;
  
  PilhaArranjo* p = new PilhaArranjo();
  for(i=0; i < num_frotas; i++){
    int id_nave;
    scanf("%d",&id_nave);
    Nave* n = new Nave(id_nave);
    p->Empilha(n);
    cout << n->getCodigo();
    //desenvolver o código para inserção correta das naves que são lidas
  }
  int operacao;
  while(scanf("%d", &operacao) != EOF) {
    //desenvolver o código relacionado as operações a serem realizadas
  }
  return 0;
}
