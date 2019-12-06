#include<stdio.h>
int main(){
	
	int n;
	scanf("%d", &n);
	int num[n], result[n-1];
	for(int i = 0; i < n; ++i){
		scanf("%d", &num[i]);
		if (i != 0)
			result[i-1] = num[i] - num[i-1];
	}
		
	for(int i = 0; i < n-2; ++i)
		if ((i+1)%3!=0)
			printf("%d ", result[i]);
		else
			printf("%d\n", result[i]);
	
	printf("%d", result[n-2]);
	
	
	return 0;
}
