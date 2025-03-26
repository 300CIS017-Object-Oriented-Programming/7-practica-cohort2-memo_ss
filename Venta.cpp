//
// Created by Santi on 3/24/2025.
//


#include <iostream>
#include <string>
#include "Venta.h"
using namespace std;

Venta::Venta() {
    cliente = "";
    producto = "";
    id = 0;
}

Venta::Venta(string clienteventa, string productoventa, int idventa) {
    this->cliente = clienteventa;
    this->producto = productoventa;
    this->id = idventa;
}
string Venta::getCliente() {
    return cliente;
}
string Venta::getProducto() {
    return producto;
}
int Venta::getId() {
    return id;
}
void Venta::mostrarinformacionventa() {
    cout << getCliente() << " " << getProducto() << " " << getId() << endl;
}
