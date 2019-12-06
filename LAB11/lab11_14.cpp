#include<stdio.h>
int main(){
	
	int n;
	scanf("%d", &n);
	int nn[n];
	nn[0] = 1;
	for(int i = 1; i <= n; ++i){
		int cur_nn[i];
		cur_nn[0] = 1;
		cur_nn[i-1] = 1;
		for(int j = 1; j < i-1; ++j)
			cur_nn[j] = nn[j-1] + nn[j];
		
		for(int j = 0; j < n-i; ++j)
			printf(" ");
		for(int j = 0; j < i; ++j){
			nn[j] = cur_nn[j];
			printf("%4d", nn[j]);
		}
			
		printf("\n");
	}
	
	return 0;
}
