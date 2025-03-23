#include <iostream>
#include "Producto.h"
#include "Tienda.h"
#include "Venta.h"
#include "Cliente.h"
#include <vector>
using namespace std;
int main(){
    Producto producto1(101, "arroz", 2000, 10);
    Cliente cliente1("antonia", 1);


    Tienda tienda;
    tienda.prueba(producto1, cliente1); //mete el producto 1 y el cliente1 a sus respectivos vectores
    //tienda.agregarCliente();// ya funciona
    //tienda.agregarProducto(); ya funciona
    tienda.agregarVenta(cliente1, producto1);
    //tienda.listarclientes(); // ya funciona
    //tienda.listarVentas(); //ya funciona
    //cliente1.mostrarcompras(); // ya funciona
    tienda.mostrarcomprascliente(1); // esta funcion no me lleva a la otra funcion cliente.mostrarcompra();
    //tienda.listarProductos(); // ya funciona
    tienda.imprimirClientes();
    return 0;
}