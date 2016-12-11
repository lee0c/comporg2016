#include <stdio.h>
#include <stdint.h>

int main() {
	int i;

	printf("Incrementing, i++ style\n");
	for (i=0; i<10; i++) {
		printf("i=%d\n", i);
	}
	printf("\n");

	printf("Incrementing, ++i style\n");
	for (i=0; i<10; ++i) {
		printf("i=%d\n", i);
	}
	printf("\n");

	printf("Decrementing, i-- style\n");
	for (i=10-1; i>=0; i--) {
		printf("i=%d\n", i);
	}
	printf("\n");

	printf("Decrementing, --i style\n");
	for (i=10-1; i>=0; --i) {
		printf("i=%d\n", i);
	}
	printf("\n");

	return(1);
}