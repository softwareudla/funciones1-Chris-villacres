#include <stdio.h>
#include <string.h>
#include "funciones.h"

int CantidadProductos() {
    int cantidad;
    do {
        printf("Ingrese la cantidad de productos (maximo %d): ", MAX_PRODUCTOS);
        scanf("%d", &cantidad);
        getchar(); 
        if (cantidad < 1 || cantidad > MAX_PRODUCTOS) {
            printf("Numero invalido. Debe estar entre 1 y %d.\n", MAX_PRODUCTOS);
        }
    } while (cantidad < 1 || cantidad > MAX_PRODUCTOS);
    return cantidad;
}

void ingresarproductos(char productos[MAX_PRODUCTOS][20], float precios[MAX_PRODUCTOS], int cantidades[MAX_PRODUCTOS], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("Nombre del producto %d: ", i + 1);
        fgets(productos[i], 20, stdin);

        int resultado;
        do {
            printf("Ingrese el precio del producto %s: ", productos[i]);
            resultado = scanf("%f", &precios[i]);
            if (resultado != 1) {
                printf("Error. Ingrese un número.\n"); 
                while (getchar() != '\n'); 
            }
        } while (resultado != 1);
        getchar(); 

        do {
            printf("Ingrese la cantidad del producto %s: ", productos[i]);
            resultado = scanf("%d", &cantidades[i]);
            if (resultado != 1 || cantidades[i] < 1) {
                printf("Error. Ingrese un número positivo.\n"); 
                while (getchar() != '\n'); 
            }
        } while (resultado != 1 || cantidades[i] < 1);
        getchar();
    }
}

void Lista(char productos[MAX_PRODUCTOS][20], float precios[MAX_PRODUCTOS], int cantidades[MAX_PRODUCTOS], int cantidad) {
    printf("\nProductos, precios y cantidades:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("%s : %.2f (Cantidad: %d)\n", productos[i], precios[i], cantidades[i]);
    }
}

void OpeInventario(char productos[MAX_PRODUCTOS][20], float precios[], int cantidades[], int cantidad) {
    float suma = 0, pmayor = precios[0], pmenor = precios[0];
    int Mascaro = 0, Masbarato = 0;

    for (int i = 0; i < cantidad; i++) {
        suma += precios[i] * cantidades[i]; 
        if (precios[i] > pmayor) {
            pmayor = precios[i];
            Mascaro = i;
        }
        if (precios[i] < pmenor) {
            pmenor = precios[i];
            Masbarato = i;
        }
    }

    printf("\nEl producto mas caro es: %s con un precio de: %.2f\n", productos[Mascaro], pmayor);
    printf("El producto mas barato es: %s con un precio de: %.2f\n", productos[Masbarato], pmenor);
    printf("Total del inventario: %.2f\n", suma);
}

void Promedio(float precios[MAX_PRODUCTOS], int cantidad) {
    float suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += precios[i];
    }
    printf("Precio promedio de los productos: %.2f\n", suma / cantidad);
}

void Busqueda(char productos[MAX_PRODUCTOS][20], float precios[MAX_PRODUCTOS], int cantidades[MAX_PRODUCTOS], int cantidad) {
    char BuscarNom[20];
    int encontrado = 0;

    printf("\nIngrese el nombre del producto que busca: ");
    fgets(BuscarNom, 20, stdin);

    for (int i = 0; i < cantidad; i++) {
        if (strcmp(productos[i], BuscarNom) == 0) {
            printf("El precio del producto '%s' es: %.2f (Cantidad: %d)\n", productos[i], precios[i], cantidades[i]);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Producto no encontrado.\n");
    }
}