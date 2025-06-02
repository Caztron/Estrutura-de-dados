#include <stdio.h>

int main() {
	int i = 0;
	printf("Digite sua idade:\t");
	scanf("%d", &i);
	if (i>70) {
		printf("voce esta Velho");
	} else {
		if (i>21){
			printf("adulto");
		} else {
			printf("jovem");
		}
	}
}
