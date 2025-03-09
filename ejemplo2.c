#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arreglo, num, cont;
    printf("%cCuantos elementos tiene el conjunto?\n", 168);
    scanf("%d", &num);
    printf("%p\n",arreglo);

    arreglo = (int*)calloc(num , sizeof(int));//El primer argumneto almacena el numero de elementos y el segundo el tamaño de los elementos a reservar
    if(arreglo != NULL){
        printf
        ("Vector reservado:\n\t[");
        for(cont =0; cont <num; cont++){
            printf("\t%d", *(arreglo + cont));            
        }
        printf("\t]\n");
        printf("Liberando el espacio reservado\n");
        free(arreglo);        
        arreglo = NULL;
    }
    return 0;
}