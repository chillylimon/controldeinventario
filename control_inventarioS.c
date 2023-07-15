#include <stdio.h>
#include <stdlib.h>
int main()
{

    int x, z, a, aux;
    int inventario[100];

    printf("Ingrese el numero de elementos del inventario: ");
    scanf(" %d ", &a);

    for (x = 0; x < a; x++)
    {
        printf("Ingrese el elemento %d del inventario: ", x + 1);
        scanf(" %d ", &inventario[x]);
    }

    for (x = 0; x < a - 1; x++)
    {
        for (z = x + 1; z < a; z++)
        {
            if (inventario[x] > inventario[z])
            {
                aux = inventario[x];
                inventario[x] = inventario[z];
                inventario[z] = aux;
            }
        }
    }

    printf("El inventario ordenado es: ");
    for (x = 0; x < a; x++)
    {
        printf(" %d ", inventario[x]);
    }
    return 0;
}