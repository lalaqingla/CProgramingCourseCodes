#include<stdio.h>
double fact(int n);
int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	double result = fact(n) / (fact(m)*fact(n-m));
	printf("result = %.0lf", result);
	return 0;
}
double fact(int n){
	double result=1;
	for(int i = 1; i <= n; ++i)
		result *= i;
	return result;
}
