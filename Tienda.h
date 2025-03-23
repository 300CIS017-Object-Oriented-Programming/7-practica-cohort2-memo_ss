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
  void agregarProducto() {
      int cod = productos.size() + 101;
      string nom;
      double costo;
      int cantidad;
      cout << "ingrese el nombre del producto: "<< "  ";
      cin >> nom;
      cout << "ingrese el precio del producto: "<< "  ";
      cin >> costo;
      cout << "ingrese el stock del producto: "<< "  ";
      cin >> cantidad;
      Producto nuevoProducto(cod, nom, costo, cantidad);
      productos.push_back(nuevoProducto);
  }
    void agregarCliente() {
      int identificacion = clientes.size() + 1;
      string nombre;
      cout << "ingrese el nombre del cliente: ";
      cin >> nombre;
      Cliente cliente(nombre, identificacion);
      clientes.push_back(cliente);
      cliente.getnombrecliente();
  }
    void agregarVenta(Cliente &cliente, Producto &producto) {
      string clienteventa = cliente.getnombrecliente();
      string productoventa = producto.getnombreProducto();

      if (producto.getcantidad() > 0) {
          producto.descontarcantidad();
          int id = ventas.size() + 1;

          Venta nuevaventa(clienteventa, productoventa, id);
          ventas.push_back(nuevaventa);
          cliente.agregarcompra(&ventas.back());
      } else {
          cout << "No hay stock suficiente para la venta." << endl;
      }
  }
    void listarclientes() {
      for (size_t i = 0; i < clientes.size(); i++) {
          clientes[i].mostrarinformacion();
      }
  }
    void listarProductos() {
        for (size_t i = 0; i < productos.size(); i++) {
            productos[i].mostrarinformacion();
        }
    }
    void listarVentas() {
      for (size_t i = 0; i < ventas.size(); i++) {
        ventas[i].mostrarinformacionventa();
      }
  }
    void mostrarcomprascliente(int idcliente) {
      clientes[0].mostrarcompras();
  } // no logre que sirviera esto
    void prueba(Producto producto1, Cliente cliente1) {
      productos.push_back(producto1);
      clientes.push_back(cliente1);
  }
    void imprimirClientes() {
      cout << endl;
      if (clientes.size() > 0) {
          for (size_t i = 0; i < clientes.size(); i++) {
              clientes[i].mostrarinformacion();
          }
      } else {
          cout << "No hay clientes en la tienda." << endl;
      }
  }

};
#endif //TIENDA_H
