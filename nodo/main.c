#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    nodo *primero = NULL;
    nodo *temp;
    nodo *otro;
    primero = crear_nodo(1);
    otro = crear_nodo(1);
    otro->sig = crear_nodo(3);
    primero->sig = crear_nodo(2);
    primero->sig->sig = crear_nodo(3);
    printf("%p\n", primero);
    print_nodo(primero);

    printf("%p\n", primero->sig);
    print_nodo(primero->sig);

    printf("%p\n", primero->sig->sig);
    print_nodo(primero->sig->sig);                                                                                        

    while (primero != NULL) {
        temp = primero;
        primero = primero->sig;
        free(temp);
    }
    
    while (otro != NULL) {
        temp = otro;
        otro = otro->sig;
        free(temp);
    }

    return 0;
}