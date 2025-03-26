//
// Created by Santi on 3/18/2025.
//

#ifndef PRODUCTO_H
#define PRODUCTO_H


#include <iostream>
using namespace std;

class Producto{
  private:
    int codigo;
    string nombre;
    int precio;
    int cantidadinicial;
  public:
    Producto();
    Producto(int cod, string nom, int costo, int cantidad);
    void mostrarinformacion();
  string getnombreProducto();
  int getcodigoProducto();
  int getprecioproducto();
  void descontarcantidad();
  void agregarcantidad(int cantidadextra);
  int getcantidad();
};

#endif //PRODUCTO_H
