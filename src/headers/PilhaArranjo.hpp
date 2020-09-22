#ifndef PILHA_ARRANJO_HPP
#define PILHA_ARRANJO_HPP
#include "./Nave.hpp"
#include "./Pilha.hpp"

class PilhaArranjo : public Pilha
{
    public:
        PilhaArranjo();
        void Empilha(Nave* item);
        Nave* Desempilha();
        void Limpa();
    private:
        int topo;
        static const int MAXTAM = 5000;
        Nave* itens[MAXTAM];
};
#endif