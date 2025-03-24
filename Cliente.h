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
    // Constructor por defecto
    Cliente() : id(0), nombre("") {}

    // Constructor con parámetros
    Cliente(const string& nom, int identificacion) : id(identificacion), nombre(nom) {}

    // Métodos getter con const
    string getnombrecliente() const { return nombre; }
    int getidcliente() const { return id; }

    // Método para mostrar información
    void mostrarinformacion() const {
        cout << "Identificacion: " << id << " Nombre: " << nombre << endl;
    }

    // Agregar compra al vector
    void agregarcompra(Venta* venta) {
        compras.emplace_back(venta);
        cout << "Compra agregada. Total de compras: " << compras.size() << endl;
    }

    // Mostrar compras realizadas
    void mostrarcompras() const {
        for (size_t i = 0; i < compras.size(); i++) {
            compras[i]->mostrarinformacionventa();
        }
    }

    // Destructor para liberar memoria
    ~Cliente() {
        for (Venta* venta : compras) {
            delete venta;  // Evita fugas de memoria
        }
        compras.clear();
    }
};

#endif // CLIENTE_H
