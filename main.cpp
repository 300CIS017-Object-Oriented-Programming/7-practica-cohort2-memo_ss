#include <iostream>
#include "Producto.h"
#include "Tienda.h"
using namespace std;
int main(){
    Tienda tienda;
    string cod = "1234";
    string nom = "arroz";
    int cantidad = 2;
    int costo = 2000;
    Producto arroz(cod, nom, costo, cantidad);
    tienda.agregarProducto(cod, nom, costo, cantidad);
    tienda.listarProductos();
    return 0;
}