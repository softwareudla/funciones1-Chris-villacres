#ifndef FUNCIONES_H
#define FUNCIONES_H
#define MAX_PRODUCTOS 10 

int CantidadProductos();
void ingresarproductos(char productos[MAX_PRODUCTOS][20], float precios[MAX_PRODUCTOS], int cantidades[MAX_PRODUCTOS], int cantidad); 
void Lista(char productos[MAX_PRODUCTOS][20], float precios[MAX_PRODUCTOS], int cantidades[MAX_PRODUCTOS], int cantidad); 
void OpeInventario(char productos[MAX_PRODUCTOS][20], float precios[MAX_PRODUCTOS], int cantidades[MAX_PRODUCTOS], int cantidad); 
void Promedio(float precios[MAX_PRODUCTOS], int cantidad);
void Busqueda(char productos[MAX_PRODUCTOS][20], float precios[MAX_PRODUCTOS], int cantidades[MAX_PRODUCTOS], int cantidad);

#endif