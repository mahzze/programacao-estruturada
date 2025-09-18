// Q: Quais os problemas do código abaixo?
//
// int main() {
//	int i;
//	for (i = 0; i < 5; i++); {
//		printf("%d\n", i);
//	} 
//	return 0; 
// }
//
// Problema 1: Não há o #include <stdio.h>.
// Logo, é impossível utilizar o printf, que é definido no stdio.h
//
// Problema 2: O ; no for. Ao colocar o ; após a expressão booleana,
// o que isso faz é: O i vai ser repetido até o fim da condição (ou seja, até 
// i = 5), e então ele executa o bloco de códigos que vem depois, resultando 
// em na string: "5" sendo impressa.
// Caso corrigido, o programa imprimirá 5 linhas, cada uma com um valor de i:
// "0"
// "1"
// "2"
// "3"
// "4"

#include <stdio.h>
int main() {
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d\n", i);
	}
	return 0;
}
