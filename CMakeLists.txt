cmake_minimum_required(VERSION 3.10)
project(MiProyecto)

set(CMAKE_CXX_STANDARD 17)

add_executable(MiProyecto main.cpp Tienda.cpp Cliente.cpp Producto.cpp Venta.cpp)
