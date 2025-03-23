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
    Cliente() {
        id = 0;
        nombre = "";
    }
    Cliente(string nom, int identificacion) {
        id = identificacion;
        nombre = nom;
    }
    string getnombrecliente() {
        return nombre;
    }
    int getidcliente() {
        return id;
    }
    void mostrarinformacion(){
        cout << "identificacion: " << id << " Nombre:" << nombre <<endl;
    }
    void agregarcompra(Venta* venta) {
        compras.push_back(venta);
        cout << "Compra agregada. Total de compras: " << compras.size() << endl;
    }
    void mostrarcompras() {
        for (size_t i = 0; i < compras.size(); i++) {
            compras[i]->mostrarinformacionventa();
        }
    }

};


#endif //CLIENTE_H
