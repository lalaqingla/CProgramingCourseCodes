#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	double sum=0, item=1;
	for(int i = 0; i <= n; ++i){
		sum += 1.0 / item;
		item *= i + 1;
	}
	printf("%.8lf", sum);
	return 0;
}
