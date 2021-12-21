#include <stdio.h>

//일단한줄추가

int a = 0;
int b = 0;

int ask() {
	scanf("%d, %d",&a, &b);
}

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
	ask();
	printf("%d",answer());
	return 0;
}