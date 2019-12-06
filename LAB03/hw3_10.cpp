#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	double sum = 0;
	int flag = 1;
	for(int i = 1; i <= n; ++i){
		sum += flag * i * 1.0 / (2*i-1);
		flag *= -1;
	}
	printf("%.3lf", sum);
	return 0;
}
