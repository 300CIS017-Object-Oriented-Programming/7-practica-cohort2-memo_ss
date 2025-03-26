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
  vector<Cliente*> clientes;
  vector<Venta*> ventas;
  vector<Producto*> productos;
public:
    Tienda();
  void agregarProducto();
    void agregarCliente();
    void agregarVenta(Cliente *cliente, Producto *producto);
    void listarclientes();
    void listarProductos();
    void listarVentas();
    void mostrarcomprascliente(int idcliente);
    void imprimirClientes();
    void inicializador();
    void reabastecerproducto();
    void buscarproducto();
    void buscarcliente();
    void calcularvalorinventario();
    vector<Cliente*> getClientes();
    vector<Producto*> getProductos();
};
#endif //TIENDA_H

