#include <stdio.h>
#include <stdlib.h> //Biblioteca para incluir memoria dinamica

int main(){
    int *arreglo, num, cont;
    printf("%cCuantos elementos tiene el conjunto?\n", 168);
    scanf("%d", &num);
    arreglo = (int*)malloc(num *sizeof(int));//Reserva memoria dependiendo del numero de datos que ingrese el usuario
    if(arreglo != NULL){ 
        printf("Vector reservado:\n\t[");
        for(cont =0; cont <num; cont++){
            printf("\t%d, %p", *(arreglo + cont), (arreglo+cont));            
        }
        printf("\t]\n");
        printf("Liberando el espacio reservado\n");
        free(arreglo);        
        arreglo = NULL;
    }
    return 0;
}
