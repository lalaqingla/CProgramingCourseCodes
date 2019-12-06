#include<stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int add, sub, mul, div;
	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d", a, b, add, a, b, sub, a, b, mul, a, b, div);
	return 0;
}
