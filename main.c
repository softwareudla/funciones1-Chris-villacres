#include <stdio.h>
#include "funciones.h"

int main() {
    char productos[MAX_PRODUCTOS][20];
    float precios[MAX_PRODUCTOS];
    int cantidad = CantidadProductos();

    ingresarproductos(productos, precios, cantidad);
    Lista(productos, precios, cantidad);
    OpeInventario(productos, precios, cantidad);
    Promedio(precios, cantidad);
    Busqueda(productos, precios, cantidad);
    
    return 0;
}


