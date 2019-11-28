#include<stdio.h>
int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int a[n];
	for(int i = 0; i < n; ++i){
		scanf("%d", &a[i]);
	}
	
	if (n == 1){
		printf("%d", a[0]);
		return 0;
	}
	
	int min, idx, tmp;
	for(int i = 0; i < n - 1; ++i){
		min = a[i];
		idx = i;
		for(int j = i; j < n; ++j){
			if (a[j] < min){
				min = a[j];
				idx = j;
			}
		}
		
		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
		
		if (i == k){
			for(int j = 0; j < n; ++j){
				if(j == 0)
					printf("%d", a[j]);
				else
					printf(" %d", a[j]);
			}
			printf("\n");
			break;
		}
	}
	
	return 0;
}
