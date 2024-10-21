
#ifndef FUNCIONES_H
#define FUNCIONES_H
#define MAX_PRODUCTOS 10 

int CantidadProductos();
void ingresarproductos (char productos[10][20], float precios[10], int cantidad);
void Lista(char productos[10][20], float precios[10], int cantidad);
void OpeInventario(char productos[10][20], float precios[10], int cantidad);
void Promedio( float precios[10], int cantidad);
void Busqueda(char productos[10][20], float precios[10], int cantidad);

#endif  

