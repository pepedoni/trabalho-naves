#ifndef PILHA_HPP
#define PILHA_HPP
class Pilha
{
    public:
        Pilha(){tamanho = 0;};
        int GetTamanho();
        bool Vazia();
        virtual void Empilha(Nave* item) = 0;
        virtual Nave* Desempilha() = 0;
        virtual void Limpa() = 0;
    protected:
        int tamanho;
};
#endif

