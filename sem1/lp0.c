#include <stdio.h>
int main(){
	int a=3, b=5;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d\n", a, b);
	return 0;
}

// O código acima mostra a string: "5 3"
