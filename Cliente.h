//
// Created by Santi on 3/18/2025.
//

#ifndef CLIENTE_H
#define CLIENTE_H

#include "Venta.h"
#include <iostream>
#include <vector>

using namespace std;

class Cliente {
private:
    int id;
    string nombre;
    vector<Venta*> compras;

public:
    Cliente();
    Cliente(string nom, int identificacion);
    string getnombrecliente();
    int getidcliente();
    void mostrarinformacion();
    void agregarcompra(Venta* venta);
    void mostrarcompras();
    int getsizecomprascliente();
};

#endif // CLIENTE_H
