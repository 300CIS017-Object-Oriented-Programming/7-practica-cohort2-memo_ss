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
    Producto(){
      codigo = 0;
      nombre = "";
      precio = 0;
      cantidadinicial = 0;
    }
    Producto(int cod, string nom, int costo, int cantidad){
      nombre = nom;
      codigo = cod;
      precio = costo;
      cantidadinicial = cantidad;
    }
    void mostrarinformacion(){
    	cout << "Codigo: " << codigo << " Nombre: " << nombre << " Precio: " << precio << " Cantidad: " << cantidadinicial <<endl;
    }
  string getnombreProducto() {
      return nombre;
    }
  int getcodigoProducto() {
      return codigo;
    }
  int getprecioproducto() {
      return precio;
    }
  void descontarcantidad() {
      if (cantidadinicial > 0) {
        cantidadinicial--;
      } else {
        cout << "No hay suficiente stock!" << endl;
      }
    }
  void agregarcantidad() {
      cantidadinicial++;
    }
  int getcantidad() {
      return cantidadinicial;
    }
};

#endif //PRODUCTO_H
