#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if (n < 1 || n > 10){
		printf("Invalid.");
		return 0;
	}
	long a[n];
	double avg = 0;
	for(int i = 0; i < n; ++i){
		scanf("%ld", &a[i]);
		avg += a[i];
	}
	avg /= n;
	printf("%.2lf\n", avg);
	
	int count = 0;
	for(int i = 0; i < n; ++i){
		if (a[i] > avg){
			printf("%ld ", a[i]);
			count ++;
		}
	}
	if (count == 0)
		printf("\n");
	
	return 0;
}
