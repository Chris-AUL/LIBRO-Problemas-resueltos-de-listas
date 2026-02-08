/*
    EJEMPLO BASE
*/

/*
#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using namespace std;

class Lista {
public:
    Lista();        // Constructor
    void hola();    // Método público
};

#endif
*/

/*
Evitar errores por doble inclusión:

    > #ifndef
    > #define
    > #endif
*/

/*
    EJEMPLO CON TEMPLATES
*/

#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using namespace std;

template <typename T>
class Lista
{
private:
    T dato;

    public:
    Lista(T d) : dato(d) {}
    void hola() {
        cout << "Hola mundo con template, dato = " << dato << endl;
    }
};

#endif