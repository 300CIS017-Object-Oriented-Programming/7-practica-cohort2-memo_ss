//
// Created by Santi on 3/18/2025.
//

#ifndef PRODUCTO_H
#define PRODUCTO_H


#include <iostream>
using namespace std;

class Producto{
  private:
    string codigo;
    string nombre;
    int precio;
    int cantidadinicial;
  public:
    Producto(){
      codigo = "";
      nombre = "";
      precio = 0;
      cantidadinicial = 0;
    }
    Producto(string cod, string nom, int costo, int cantidad){
      codigo = cod;
      nombre = nom;
      precio = costo;
      cantidadinicial = cantidad;
    }
    void mostrarinformacion(){
    	cout << "Codigo: " << codigo << " Nombre: " << nombre << " Precio: " << precio << " Cantidad: " << cantidadinicial <<endl;
    }
};

#endif //PRODUCTO_H
