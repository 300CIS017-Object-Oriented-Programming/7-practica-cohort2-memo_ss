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

};


#endif //TIENDA_H
