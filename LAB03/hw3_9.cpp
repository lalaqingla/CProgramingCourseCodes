#include<stdio.h>
int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	double s=0;
	for(int i = m; i <= n; ++i){
		s += i*i + 1.0 / i;
	}
	printf("sum = %.6lf", s);
	return 0;
}
