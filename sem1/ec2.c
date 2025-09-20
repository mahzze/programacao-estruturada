#include <stdio.h>

int main() {
        int n, i = 1;

        printf("Digite o número\n");
        scanf("%d", &n);

        if (n < 0) {
                printf("%d não é um numero positivo!\n", n);
                return 1;
        }

        printf("Divisores de %d:\n", n);
        do {
                if (n%i == 0) printf("%d ", i);
                // é desnecessário colocar o { } após o if, pois é executado
                // apenas um comando. Isso, no entanto, costuma ser considerado
                // como uma má prática, então procurem evitar, a menos que
                // saibam o que estao fazendo.

                i++;
        } while (i<n);

        return 0;
}
