//
// Created by Santi on 3/24/2025.
//
#include "Venta.h"
#include <iostream>
#include <vector>
#include "Cliente.h"
using namespace std;

Cliente::Cliente() {
    id = 0;
    nombre = "";
    vector<Venta> compras = {};
}
Cliente::Cliente(string nom, int identificacion) {
    id = identificacion;
    nombre = nom;
    vector<Venta> compras = {};
}
string Cliente::getnombrecliente() {
  return nombre;
}
int Cliente::getidcliente() {
        return id;
}
void Cliente::mostrarinformacion() {
    cout << "identificacion: " << id << " Nombre:" << nombre <<endl;
}

void Cliente::agregarcompra(Venta* venta) {
    compras.push_back(venta);
    cout << compras.size() << " ese es el tamaño de compras" << endl;
}

void Cliente::mostrarcompras() {
  cout << compras.size() << endl;
    for (int i = 0; i < compras.size(); i++) {
        compras[i]->mostrarinformacionventa();
    }
}
int Cliente::getsizecomprascliente(){
	return compras.size();
}
