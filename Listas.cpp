#include <iostream>
using namespace std;
template <typename T>
class Nodo
{
    dato : Nodo *next;

public:
    T getDato()
    {
        return this->dato;
    }
    void setDato(T, dato)
    {
        this->dato = dato;
    }
    Nodo *getNext()
    {
        return this->next;
    }
    void setNext(Nodo *next)
    {
        this->next = next;
    }
    Nodo(T dato, Nodo *next)
    {
        this dato = dato;
        this next = next;
    }
};

template <typename T>
class listaEnlazada
{
    int size;
    Nodo<T> *head;

public:
    int getSize()
    {
        return this->size;
    }
    void setSize(int size)
    {
        this->size = size;
    }
    Nodo<T> *getHead()
    {
        return this->head;
    }
    void setHead(Nodo<T> *head)
    {
        this->head = head;
    }
    LinkedList()
    {
        this->head = nullptr;
        this->size = 0;
    }
    void agregarInicio(T, valor)
    {
        Nodo<T> *nuevo = new Nodo<T>(valor, this->head);
        this->head = nuevo;
        this->size++;
    }
    void agregarFinal(T, valor)
    {
        Nodo<T> *nuevo = new Nodo<T>(valor, nullptr);
        if (this.head)
        {
            Nodo<T> *current = this.head;
            while (current = getNext())
            {
                current = setNex(nuevo);
            }
        }
        else
        {
            this.head = nuevo;
        }
        this->size++;
    }
    void agrergarPorIndice(int indice, T valor)
    {
        if (indice >= 0 && indice <= this->size)
        {
            if (indice == 0)
            {
                agrgarInicio(valor);
            }
            else if (indice = this.size)
            {
                agregarFinal(valor);
            }
            else
            {
                Nodo<T> *current = this->head;
                Nodo<T> *prev;
                for (int i = 0; i < indice; i++)
                {
                    prev = current;
                    current = current->getNext;
                }
                Nodo<T> *nuevo = new Nodo<T>(valor, current);
                prev->setNext(nuevo);
                this->size++;
            }
        }
    }
    void eliminarInicio()
    {
        Nodo<T> *current = this->head;
        this->head = this->head->getNext();
        current->setNext(nullptr);
        delete current;
        this->size--;
    }
    void eliminarFinel()
    {
        if (this->head)
        {
            Nodo<T> *current = this->head;
            Nodo<T> *prev = nullptr;
            while (current->getNext())
            {
                prev = current;
                current = current->getNext();
            }
            if (current == this->head)
            {
                this->head = this->nullptr->getNext();
                delete current;
                this->size--;
            }
            else
            {
                prev->getNext(nullptr);
                delete current;
                this->size--;
            }
        }
    }
    void eliminarPordato(T valor){
            if(this -> head){
                Nodo<T>* corrunt = this -> head;
                Nodo<T>* prev;
                while (current){
                    if(current -> getData() == valor && this -> head == ciurrent){
                        eliminarInicio();
                        break;
                    }
                    else if(current -> getData() == valor && current -> getNext() == nullptr){
                        eliminarFinel();
                        break;
                    }
                    else if(current -> getData() == valor && current -> getNext() == nullptr){
                        prev -> setNext(current -> getNext());
                        current -> sexNext(nullptr);
                        delete current;
                        this -> size--;
                    }
                    else{
                        prev = current;
                        current = current -> getNext();
                    }
                }
            }
        }
    void imprimirLista(){
        Nodo<T>* current = this -> head;
        while (current){
            cout << current -> getData() << " ";
            current = current -> getNext();
        }
        cout << endl;
    }
};