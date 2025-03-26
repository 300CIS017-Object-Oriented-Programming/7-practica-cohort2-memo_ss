//
// Created by Santi on 3/18/2025.
//

#ifndef VENTA_H
#define VENTA_H

#include <iostream>
#include <string>
using namespace std;

class Venta {
private:
    string cliente;
    string producto;
    int id;

public:
    Venta();
    Venta(string clienteventa, string productoventa, int idventa);
    string getCliente();
    string getProducto();
    int getId();
    void mostrarinformacionventa();
};


#endif //VENTA_H