// Como corrigir? De no printf, usar a tag adequada para o tipo de avg (float)
// A tag correta é %f, que é para números reais em forma decimal. Para definir
// a quantidade de casas decimais, basta fazer como viram em PI com python.
// Por exemplo, para mostrar 10 casas decimais, fazer %.10f, para N casas, %.Nf
// Segue abaixo versão corrigida.

#include <stdio.h>

int main() {
	int sum = 0;
	float avg = 0;
	for (int i = 1; i <= 3; i++) {
		sum += i;
	}
	avg = sum / 3;
	printf("Average = %f\n", avg); // pra quem nao sabe ingles,
				       // average significa "média"
	return 0;
}
