#include <stdio.h>

int a = 2;
int b = 3;

int summary(int a, int b) {
	return a + b;
}

int multif(int a, int b) {
	return a * b;
}

int answer() {
	return summary(a, b) + multif(a, b);
}

int main(void) {
	printf("%d",answer());
	return 0;
}