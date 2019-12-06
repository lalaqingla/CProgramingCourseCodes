#include<stdio.h>
int main(){
	double eps;
	scanf("%le", &eps);
	double tmp = 1, i = 1, sum = 1;
	if (eps < 1){
		while(1){
			tmp = tmp * i / (2 * i + 1);
			sum += tmp;
			i++;
			if (tmp < eps)
				break;
		}
	}
	printf("PI = %.5lf", sum * 2);
	return 0;
}
