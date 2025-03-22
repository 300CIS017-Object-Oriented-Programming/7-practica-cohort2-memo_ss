//
// Created by Santi on 3/18/2025.
//

#ifndef TIENDA_H
#define TIENDA_H

#include <iostream>
#include <vector>
#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"
using namespace std;


class Tienda{
private:
  vector<Cliente> clientes;
  vector<Venta> ventas;
  vector<Producto> productos;
public:
  void agregarProducto(string cod, string nom, int costo, int cantidad) {
        Producto nuevoProducto(cod, nom, costo, cantidad);
        productos.push_back(nuevoProducto);
    }

    void listarProductos() {
        for (size_t i = 0; i < productos.size(); i++) {
            productos[i].mostrarinformacion();
        }
    }
};
#endif //TIENDA_H
