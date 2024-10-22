#include <stdio.h>
#include "funciones.h"

int main() {
    char productos[MAX_PRODUCTOS][20];
    float precios[MAX_PRODUCTOS];
    int cantidades[MAX_PRODUCTOS]; 
    int cantidad = CantidadProductos();

    ingresarproductos(productos, precios, cantidades, cantidad); 
    Lista(productos, precios, cantidades, cantidad); 
    OpeInventario(productos, precios, cantidades, cantidad); 
    Promedio(precios, cantidad);
    Busqueda(productos, precios, cantidades, cantidad);

    return 0;
}

