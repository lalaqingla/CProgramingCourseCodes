#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; ++i){
		scanf("%d", &a[i]);
	}
	
	if(n == 1){
		printf("%d", a[0]);
		return 0;
	}
	
	for(int i = 0; i < n - 1; ++i){
		for(int j = 1; j < n; ++j){
			if(a[j] < a[j-1]){
				int tmp = a[j-1];
				a[j-1] = a[j];
				a[j] = tmp;
			}
		}
		
		for(int j = 0; j < n; ++j){
			if(j == 0)
				printf("%d", a[j]);
			else
				printf(" %d", a[j]);
		}
		printf("\n");
	}
	
	return 0;
}
