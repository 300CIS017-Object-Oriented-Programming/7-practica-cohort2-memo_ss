//
// Created by Santi on 3/18/2025.
//

#ifndef VENTA_H
#define VENTA_H

#include <iostream>
#include <string>
#include "Producto.h"
using namespace std;

class Venta {
private:
    string cliente;
    string producto;
    int id;

public:
    Venta() {
        cliente = "";
        producto = "";
        id = 0;
    }

    Venta(string clienteventa, string productoventa, int idventa) {
        this->cliente = clienteventa;
        this->producto = productoventa;
        this->id = idventa;
    }
    string getCliente() {
        return cliente;
    }
    string getProducto() {
        return producto;
    }
    int getId() {
        return id;
    }
    void mostrarinformacionventa() {
        cout << getCliente() << " " << getProducto() << " " << getId() << endl;
    }

};


#endif //VENTA_H