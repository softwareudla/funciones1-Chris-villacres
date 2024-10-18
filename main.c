#include <stdio.h>
#include <conio.h>
#include "funciones.h"

int main() {
    char productos[10][20];
    float precios[10];
    int cantidad = 10; 

    ingresarproductos(productos, precios, cantidad);
    Lista(productos, precios, cantidad);
    OpeInventario(productos, precios, cantidad);
    Promedio(precios, cantidad);
    Busqueda(productos, precios, cantidad);
    

    getch();
    return 0;
}
