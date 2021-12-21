#include <stdio.h>

int a = 0;
int b = 0;

int ask() {
	printf("두 개의 숫자를 입력해주세요.\nex)4, 5 : ");
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