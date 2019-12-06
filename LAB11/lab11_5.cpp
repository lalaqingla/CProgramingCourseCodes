#include<stdio.h>
int main(){
	
	int n;
	scanf("%d", &n);
	int num[n+1];
	for(int i = 0; i < n; ++i)
		scanf("%d", &num[i]);
	int x;
	scanf("%d", &x);
	
	int i;
	for(i = 0; i < n; ++i)
		if (x < num[i])
			break;
	for(int j = n; j > i; --j)
		num[j] = num[j-1];
	num[i] = x;
	
	for(i = 0; i < n+1; ++i)
		printf("%d ", num[i]);
	
	return 0;
}
