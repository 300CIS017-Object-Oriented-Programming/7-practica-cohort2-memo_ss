//
// Created by Santi on 3/24/2025.
//

#include <iostream>
#include "Producto.h"
using namespace std;


Producto::Producto(){
    codigo = 0;
    nombre = "";
    precio = 0;
    cantidadinicial = 0;
}
Producto::Producto(int cod, string nom, int costo, int cantidad){
    nombre = nom;
    codigo = cod;
    precio = costo;
    cantidadinicial = cantidad;
}
void Producto::mostrarinformacion(){
    cout << "Codigo: " << codigo << " Nombre: " << nombre << " Precio: " << precio << " Cantidad: " << cantidadinicial <<endl;
}
string Producto::getnombreProducto() {
    return nombre;
}
int Producto::getcodigoProducto() {
    return codigo;
}
int Producto::getprecioproducto() {
    return precio;
}
void Producto::descontarcantidad() {
    if (cantidadinicial > 0) {
        cantidadinicial--;
    } else {
        cout << "No hay suficiente stock!" << endl;
    }
}
void Producto::agregarcantidad(int cantidadextra) {
    cantidadinicial = cantidadinicial + cantidadextra;
}
int Producto::getcantidad() {
    return cantidadinicial;
}
