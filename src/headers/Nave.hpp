#ifndef NAVE_HPP
#define NAVE_HPP

class Nave 
{
    public:
        Nave();
        Nave(int codigo_nave);
        int GetCodigo();
        void SetCodigo(int codigo_nave);
        void Combate(); 
        void Avaria(); 
        void Consertada(); 
    private:
        int codigo;
};
#endif