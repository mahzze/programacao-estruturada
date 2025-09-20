#include <stdio.h>

int main(){
        // aqui dava pra usar o unsigned int, já que não existe fatorial de
        // negativo, mas como o usuario pode digitar um numero negativo,
        // deixei apenas int. A versao de unsigned ficaria:
        //  unsigned int fat;
        int fat, i;

        printf("Digite o número para calcular o fatorial\n");
        scanf("%d", &fat);
        
        if (fat < 0) {
                printf("Não existe fatorial de negativo!");
                return 1;
        }
        
        if (fat == 0) {
                printf("0! = 1");
                return 0;
        }

        // fazendo print de uma parte da mensagem, para nao criar outra variavel
        printf("%d! = ", fat);

        for (i = fat-1; i >= 1; --i) { 
        // aqui nao precisaria colocar o {} que cria um novo bloco de codigo,
        // pois eh executado apenas um unico comando. Ainda assim, eh uma boa
        // pratica separar neste bloco de codigo, para melhorar a legibilidade.
                fat *= i;
        }
        printf("%d\n", fat);

        return 0;
}
