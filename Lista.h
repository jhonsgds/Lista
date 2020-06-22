#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"

class Lista
{
    private:
        Nodo Inicio;
        Nodo Derecho;
    public:
        void InsertarInicio(int Contenido);
        void InsertarFinal(int Contenido);
        void Imprimir();
        void BorrarInicio();
        void BorrarFinal();
        int Size()
        void Borrar();
        Iterador Find(int);
        Nodo *Begin();
        Nodo *End();
        Lista();
        ~Lista();
};

class Iterador{
    private:
        Nodo *pNodo;
    public:
        void operator =(Nodo*);
        void operator ++();
        void operator --();
        int operator *();
        bool operator ==(Nodo*);
        bool operator !=(Nodo*);
};

#endif
