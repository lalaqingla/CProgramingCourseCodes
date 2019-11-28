#include<stdio.h>
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n];
	for(int i = 0; i < n; ++i){
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < m; ++i){
		int tmp = a[n-1];
		for(int j = n-1; j > 0; --j)
			a[j] = a[j-1];
		a[0] = tmp;
	}
	
	for(int i = 0; i < n; ++i)
		printf("%d ", a[i]);
	
	return 0;
}
