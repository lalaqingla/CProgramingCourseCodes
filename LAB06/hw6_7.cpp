#include<stdio.h>

int fact(int n){
	int sum = 0;
	for(int i = 1; i < n; ++i){
		if(n%i==0)
			sum += i;
	}
	if(sum == n){
		printf("%d = ", n);
		sum = 0;
		for(int i = 1; i < n; ++i){
			if(n%i==0){
				sum += i;
				if(sum != n)
					printf("%d + ", i);
				else
					printf("%d", i);
			}
		}
		printf("\n");
		return 1;
	}
	else
		return 0;
}

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	int count = 0;
	for(int i = m; i <= n; ++i){
		if(fact(i))
			count ++;
	}
	if(count == 0)
		printf("None");
	return 0;
}
