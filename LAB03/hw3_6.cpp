#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	double sum = 0;
	for (int i = 0; i < n; ++i)
		sum += 1.0 / (2*(i+1)-1);
	printf("sum = %.6lf", sum);
	return 0;
}
