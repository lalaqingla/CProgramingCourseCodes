#include<stdio.h>

int main(){
	float x;
	scanf("%f", &x);
	float result;
	if (x == 10)
		result = 1 / x;
	else
		result = x;
	printf("f(%.1f) = %.1f", x, result);
	return 0;
}
