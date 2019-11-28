#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int min_idx;
	for(int i = 0; i < n; ++i){
		scanf("%d", &a[i]);
		if (i == 0)
			min_idx = 0; // init
		else if (a[i] < a[min_idx])
			min_idx = i; // update
	}
	
	int tmp = a[0];
	a[0] = a[min_idx];
	a[min_idx] = tmp;
	
	for(int i = 0; i < n; ++i)
		printf("%d ", a[i]);
		
	return 0;
}
