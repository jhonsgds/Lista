#include "Nodo.h"

void Nodo::InsertarAdelante(int Contenido){
    Nodo *pNodo;
    pNodo = new Nodo;
    pNodo -> lIzquierdo = this;
    pNodo -> lDerecho = this -> lDerecho;
    pNodo -> lDerecho -> lIzquierdo = pNodo;
    this -> lDerecho = pNodo;
    pNodo -> Contenido = Contenido;
}

void Nodo::InsertarAtras(int Contenido){
    this -> lIzquierdo -> InsertarAdelante(Contenido);
}

void Nodo::Borrar(){
    this -> lIzquierdo -> lDerecho = this -> lDerecho;
    this -> lDerecho -> lIzquierdo = this -> lIzquierdo;
    delete this;
}
