#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int num[n];
	for(int i = 0; i < n; ++i)
		scanf("%d", &num[n-1-i]);
		
	for(int i = 0; i < n; ++i)
		if (i == 0)
			printf("%d", num[i]);
		else
			printf(" %d", num[i]);
	
	return 0;
}
