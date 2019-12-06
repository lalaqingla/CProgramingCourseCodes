#include<stdio.h>
int main(){
	int n, x;
	scanf("%d %d", &n, &x);
	int num[n];
	for(int i = 0; i < n; ++i)
		scanf("%d", &num[i]);
	
	for(int i = 0; i < n; ++i){
		if (x == num[i]){
			printf("%d", i);
			return 0;
		}
	}
	
	printf("Not Found");
	
	return 0;
}
