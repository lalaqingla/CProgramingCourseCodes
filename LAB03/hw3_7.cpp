#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	double sum = 0;
	int flag = 1;
	for (int i = 0; i < n; ++i){
		sum += flag * 1.0 / (3*i+1);
		flag *= -1;
	}
	printf("sum = %.3lf", sum);
	return 0;
}
