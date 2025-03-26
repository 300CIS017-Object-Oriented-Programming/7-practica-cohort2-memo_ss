//
// Created by Santi on 3/24/2025.
//

#include <iostream>
#include <vector>
#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"
#include "Tienda.h"
using namespace std;


Tienda::Tienda() {
    this->inicializador();
}
void Tienda::agregarProducto() {
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
      Producto* producto = new Producto(cod, nom, costo, cantidad);
      productos.push_back(producto);
  }
    void Tienda::agregarCliente() {
      int identificacion = clientes.size() + 1;
      string nombre;
      cout << "ingrese el nombre del cliente: ";
      cin >> nombre;
      Cliente* cliente = new Cliente(nombre, identificacion);
      clientes.push_back(cliente);
  }
    void Tienda::agregarVenta(Cliente *cliente, Producto *producto) {
    string clienteventa = cliente->getnombrecliente();
    string productoventa = producto->getnombreProducto();

    if (producto->getcantidad() > 0) {
        producto->descontarcantidad();
        int id = ventas.size() + 1;

        Venta* nuevaVenta = new Venta(clienteventa, productoventa, id);
        ventas.push_back(nuevaVenta);
        cliente->agregarcompra(nuevaVenta);
    }
    else {
        cout << "No hay stock suficiente para la venta." << endl;
    }
    }
    void Tienda::listarclientes() {
    // Implementación de la función
    for (size_t i = 0; i < clientes.size(); i++) {
        clientes[i]->mostrarinformacion();
    }
}
    void Tienda::listarProductos() {
        for (size_t i = 0; i < productos.size(); i++) {
            productos[i]->mostrarinformacion();
        }
    }
    void Tienda::listarVentas() {
      for (size_t i = 0; i < ventas.size(); i++) {
        ventas[i]->mostrarinformacionventa();
      }
  }
void Tienda::mostrarcomprascliente(int idcliente) {
    if (idcliente >= 1 && idcliente <= clientes.size()) {
        clientes[idcliente - 1]->mostrarcompras();
    } else {
        cout << "ID de cliente inválido." << endl;
    }
}
void Tienda::inicializador() {
    string nom = "arroz";
    string nomcliente = "santiago";
    Producto* nuevoProducto = new Producto(1, nom, 2000, 10);
    Cliente* nuevoCliente = new Cliente(nomcliente, 1);
    productos.push_back(nuevoProducto);
    clientes.push_back(nuevoCliente);
}
void Tienda::imprimirClientes() {
    cout << "\nLista de clientes en la tienda:\n";
    if (clientes.empty()) {
        cout << "No hay clientes en la tienda." << endl;
    } else {
        for (size_t i = 0; i < clientes.size(); i++) {
            clientes[i]->mostrarinformacion();
        }
    }
}
void Tienda::reabastecerproducto() {
  int idproducto;
  int cantidadextra;
  cout << "ingrese el id del producto: \n";
  cin >> idproducto;
  cout << "ingrese la cantidad a agregar del producto: \n";
  cin >> cantidadextra;
  productos[idproducto - 1]->agregarcantidad(cantidadextra);
}
void Tienda::buscarproducto() {
  int idproducto;
  cout << "ingrese el id del producto: \n";
  cin >> idproducto;
  productos[idproducto-1]->mostrarinformacion();
}
void Tienda::buscarcliente(){
  int idcliente;
  cout << "ingrese el id del cliente: \n";
  cin >> idcliente;
  clientes[idcliente - 1]->mostrarinformacion();
  }
void Tienda::calcularvalorinventario() {
  double valorinventario = 0;
    if (productos.size() > 0) {
  for (int i = 0 < productos.size(); i++;) {
    valorinventario = valorinventario + (productos[i]->getprecioproducto() * productos[i]->getprecioproducto());
  }
    }
    else
        cout << "no hay stock" << endl;
    cout << valorinventario << endl;
}
vector<Cliente*> Tienda::getClientes() {
    return clientes;
}

vector<Producto*> Tienda::getProductos() {
    return productos;
}