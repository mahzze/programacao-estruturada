#include <stdio.h>

int main(){
        int a, b, r;
        
        printf("Digite o primeiro valor\n");
        scanf("%d", &a);
        printf("Digite o segundo valor\n");
        scanf("%d", &b);

        if (a < 0 || b < 0) {
                printf("Impossível verificar MDC com um valor negativo\n");
                return 1; 
                // return 1 para indicar que nao foi possivel achar o MDC
        }
        
        // Para pular linha em um print, basta adicionar '\n'.
        // Aqui, o printf nao tem o \n no final, ou seja, ele não irá pular a
        // linha. O motivo de nao pular a linha aqui é bem simples: No while,
        // iremos modificar os valores de a e b, entao nao sera possivel fazer
        // print com os valores atuais de a e b, apenas com os valores no final
        // do algoritmo. Outra opcao seria criar outras variaveis, que receberiam
        // os valores originais de a e b (chamemos elas de x e y), para mostrar
        // no final o mdc da seguinte forma: "MDC(x, y) = a \n".
        // Para não precisar criar estas outras variaveis, estou fazendo o print
        // sem o \n. 
        printf("MDC(%d, %d) = ", a, b);

        // Aqui dentro o algoritmo de euclides. Existe outra variacao, mas esta
        // eh a mais simples 
        while (b != 0) {
                // r pega o resto da divisao a/b, exemplo: 5%2 = 1.
                // dica: sempre que precisar verificar que um numero inteiro
                // eh par, basta fazer: if (numero%2 == 0)
                // se for verificar que eh impar: if (numero%2 == 1)
                r = a%b; 
                a = b;
                b = r;
        }
        printf("%d\n", a); // aqui terminamos de enviar a mensagem do printf acima

        return 0;
}
