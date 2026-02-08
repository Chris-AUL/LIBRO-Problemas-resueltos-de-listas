/* 
    EJEMPLO BASE
*/

/*
#include "Lista.h"

Lista::Lista()
{
    // Constructor vacío
}

void Lista::hola()
{
    cout << "Hola mundo desde una clase en C++: :D" << endl;
}

int main()
{
    Lista l;
    l.hola();
    return 0;
}
*/

/*
    EJEMPLO CON TEMPLATE
*/

#include "Lista.h"

int main() {
    Lista<int> l1(10);
    Lista<char> l2('A');
    Lista<string> l3("USAC");

    l1.hola();
    l2.hola();
    l3.hola();

    return 0;
}