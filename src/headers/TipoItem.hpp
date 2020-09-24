#ifndef TIPO_ITEM_HPP
#define TIPO_ITEM_HPP

#include "Nave.hpp"

typedef int TipoChave;

class TipoItem
{
    public:
        TipoItem();
        ~TipoItem();
        TipoItem(TipoChave c);
        TipoItem(TipoChave c, Nave* n);
        void SetChave(TipoChave c);
        void SetNave(Nave* n);
        Nave* GetNave();
        TipoChave GetChave();
        void Imprime();
    private:
        TipoChave chave;
        Nave* nave;
    // outros membros
};
#endif