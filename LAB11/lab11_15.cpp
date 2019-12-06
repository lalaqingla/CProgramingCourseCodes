#include<stdio.h>
int main(){
	
	int m, n;
	scanf("%d %d", &m, &n);
	int a[n][n];
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < n; ++j)
			scanf("%d", &a[i][j]);
	
	for(int i = 0; i < m; ++i){
		int tmp[n];
		for(int j = 0; j < n; ++j)
			tmp[j] = a[j][n-1];
		
		for(int j = n-1; j > 0; --j)
			for(int k = 0; k < n; ++k)
				a[k][j] = a[k][j-1];
			
		for(int j = 0; j < n; ++j)
			a[j][0] = tmp[j];
		
	}
	
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	
	
	return 0;
}
