/* 
MENU EN PSEINT A C

Escribir 'Menu de Opciones'
Escribir '1. Clientes'
Escribir '2. Productos'
Escribir '3. Facturas'
Escribir 'Ingrese su Opcion:'

Leer opcion
Segun opcion Hacer

1:
Escribir 'Ingrese Codigo Cliente:' 
Leer cliente
2:
Escribir 'Ingrese Codigo Producto:' 
Leer producto
3:
Escribir 'Ingrese Nro Factura'
Leer factura

De Otro Modo:
Escribir 'Opcion Incorrecta!'
FinSegun

*/

#include <stdio.h>

int main()
{
    int opcion;
    int cliente;
    int producto;
    int factura;

    printf("Menu de Opciones\n");
    printf("1. Cliente\n");
    printf("2. Producto\n");
    printf("3. Facturas\n");
    printf("Ingrese su Opcion:\n");
    scanf("%d",&opcion);

    switch(opcion) {
        case 1:
            printf("Ingrese Codigo Cliente:\n");
            scanf("%d", &cliente);
            printf("El codigo del cliente es: %d", cliente);
            break;
        case 2:
            printf("Ingrese Codigo Producto:\n");
            scanf("%d", &producto);
            printf("El codigo del producto es: %d", producto);
            break;
        case 3:
            printf("Ingrese Nro Factura:\n");
            scanf("%d", &factura);
            printf("El numero de la factura es: %d", factura);
            break;
        default:
            printf("Tu opcion es Incorrecta!\n");
    }
}