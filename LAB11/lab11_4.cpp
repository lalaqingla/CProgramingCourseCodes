#include<stdio.h>
int main(){
	
	int n;
	scanf("%d", &n);
	int num[n];
	for(int i = 0; i < n; ++i)
		scanf("%d", &num[i]);
		
	int idx=0, tmp=num[0];
	for(int i = 0; i < n; ++i)
		if (num[i] < num[idx])
			idx = i;
	num[0] = num[idx];
	num[idx] = tmp;
	
	idx = 0;
	tmp = num[n-1];
	for(int i = 0; i < n; ++i)
		if (num[i] > num[idx])
			idx = i;
	num[n-1] = num[idx];
	num[idx] = tmp;
	
	for(int i = 0; i < n; ++i)
		printf("%d ", num[i]);
	
	return 0;
}
