#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Ingrese el tama%co del arreglo: ", 164);
    scanf("%d", &n);
    
    int *arr;
    arr = (int*)malloc(n *sizeof(int));
    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Ingrese %d valores.\n", n);
    for (int i = 0; i < n; i++) {
        printf("Ingresa el elemento %d del arreglo:\n", i+1);
        scanf("%d", (arr+i));
    }

    printf("El arreglo es: \n{ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("}\n");

    free(arr);
    arr = NULL;   

    return 0;
}
