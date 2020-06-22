#ifndef NODO_H
#define NODO_H

class Nodo
{
        friend class Lista;
        friend class Iterador;
    private:
        int Contenido;
        Nodo *lDerecho;
        Nodo *lIzquierdo;

    public:
        void InsertarAdelante(int Valor);
        void InsertarAtras(int Valor);
        void Borrar();

        Nodo();
        ~Nodo();
};

#endif
