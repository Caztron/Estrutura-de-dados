#include <stdio.h>

int funcao(int x) {
	if (x <=0) return 0;
	return x + funcao(x - 2);
}
int main() {
	printf("%d", funcao(5));
	return 0;
}
