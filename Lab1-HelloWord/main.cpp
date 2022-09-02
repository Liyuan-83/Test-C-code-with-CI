#include "stdio.h"
#include "stdlib.h"

int main() {
	int i;
	printf("Hello World\n");
	scanf_s("%d", &i);
	printf("input is %d\n", i);
	system("pause");
	return 0;
}