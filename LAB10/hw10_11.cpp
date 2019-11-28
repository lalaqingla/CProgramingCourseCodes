#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	long a[n];
	for(int i = 0; i < n; ++i){
		scanf("%ld", &a[i]);
	}
	
	int flag = 1;
	for(int i = 1; i < n; ++i){
		if (i > 0 && a[i] > a[i-1]){
			printf("No");
			flag = 0;
			break;
		}
	}
	if (flag)
		printf("Yes");
	
	return 0;
}
