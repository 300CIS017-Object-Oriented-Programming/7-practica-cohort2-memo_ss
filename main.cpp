#include <iostream>
#include "Tienda.h"
#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"
using namespace std;

int main() {
    Tienda tienda;
    int opcion;

    do {
        cout << "\n----- Menu -----\n";
        cout << "1. Agregar Producto\n";
        cout << "2. Agregar Cliente\n";
        cout << "3. Agregar Venta\n";
        cout << "4. Listar Clientes\n";
        cout << "5. Listar Productos\n";
        cout << "6. Listar Ventas\n";
        cout << "7. Mostrar Compras de Cliente\n";
        cout << "8. Reabastecer Producto\n";
        cout << "9. Buscar Producto\n";
        cout << "10. Buscar Cliente\n";
        cout << "11. Calcular Valor Inventario\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                tienda.agregarProducto();
                break;
            case 2:
                tienda.agregarCliente();
                break;
            case 3: {
                int idCliente, idProducto;
                cout << "Ingrese ID de cliente: ";
                cin >> idCliente;
                cout << "Ingrese ID de producto: ";
                cin >> idProducto;
                tienda.agregarVenta(tienda.getClientes()[idCliente - 1], tienda.getProductos()[idProducto - 1]);
                break;
            }
            case 4:
                tienda.listarclientes();
                break;
            case 5:
                tienda.listarProductos();
                break;
            case 6:
                tienda.listarVentas();
                break;
            case 7: {
                int idCliente;
                cout << "Ingrese ID de cliente para mostrar compras: ";
                cin >> idCliente;
                tienda.mostrarcomprascliente(idCliente);
                break;
            }
            case 8:
                tienda.reabastecerproducto();
                break;
            case 9:
                tienda.buscarproducto();
                break;
            case 10:
                tienda.buscarcliente();
                break;
            case 11:
                tienda.calcularvalorinventario();
                break;
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida, intente de nuevo." << endl;
        }
    } while (opcion != 0);

    return 0;
}