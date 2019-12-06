#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int sum = 0, mul = 1;
	for (int i = 1; i <= n; ++i){
		mul *= i;
		sum += mul;
	}
	printf("%d", sum);
	return 0;
}
