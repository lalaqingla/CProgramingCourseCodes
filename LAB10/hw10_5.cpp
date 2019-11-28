#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int min_num, min_idx;
	for(int i = 0; i < n; ++i){
		scanf("%d", &a[i]);
		if (i == 0){
			min_num = a[0];
			min_idx = 0;
		}
		if (a[i] < min_num){
			min_num = a[i];
			min_idx = i;
		}		
	}
	
	for(int i = 0; i < n; ++i){
		if (a[i] == min_num){
			printf("%d %d", min_num, i);
			break;
		}
	}
	
	return 0;
}
