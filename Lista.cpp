#include "Lista.h"
#include <iostream>

using namespace std;

void Lista::InsertarInicio(int Contenido){
    Inicio.InsertarAdelante(Contenido);
}

void Lista::InsertarFinal(int Contenido){
    Final.InsertarAtras(Contenido);
}

void Lista::Imprimir(){
    Nodo *pNodo = &Inicio;
    pNodo = pNodo -> lDerecho;

    while(pNodo != &Final){
        cout << pNodo -> Contenido << endl;
        pNodo = pNodo -> lDerecho;
    }
}

void Lista::BorrarInicio(){
    Inicio.lDerecho -> Borrar();
}

void Lista::BorrarFinal(){
    Final.lIzquierdo -> Borrar();
}

void Lista::Borrar(){
    while(Inicio.lDerecho != &Final){
        Inicio.lDerecho -> Borrar();
    }
}

int Lista::Size(){
    Nodo *pNodo = &Inicio;
    pNodo = pNodo -> lDerecho;
    int i = 0;

    while (pNodo != &Final){
        i++;
        pNodo = pNodo -> lDerecho;
    }
    return i;
}

Nodo *Lista::Begin(){
    return Inicio.lDerecho;
}

Nodo *Lista::End(){
    return &Final;
}

Lista::Lista()
{
    Inicio.lDerecho = &Final;
    Final.lIzquierdo = &Inicio;
    Inicio.lIzquierdo = nullptr;
    Final.lDerecho = nullptr;
}

Lista::~Lista()
{
    Borrar();
}

Iterador Lista::Find(int n){
    Nodo *pNodo = Inicio.lDerecho;
    Iterador It;

    while(pNodo != &Final){
        if(pNodo -> Contenido == n){
            It = pNodo;
            return It;
        }
        pNodo = pNodo -> lDerecho;
    }
    It = &Final;
    return It;
}

void Iterador::operator=(Nodo *valor){
    pNodo = Valor;
}

void Iterador::operator++(){
    pNodo = pNodo -> lDerecho;
}

void Iterador::operator--(){
    pNodo = pNodo -> lIzquierdo;
}

int Iterador::operator*(){
    return pNodo -> Contenido;
}

bool Iterador::operator==(Nodo *Valor){
    return pNodo == Valor;
}

bool Iterador::operator!=(Nodo *Valor){
    return pNodo != Valor;
}
