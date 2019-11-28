#include<stdio.h>
int main(){
	int n;
	long x;
	scanf("%d %ld", &n, &x);
	long a[n];
	for(int i = 0; i < n; ++i){
		scanf("%ld", &a[i]);
		if (i > 0 && a[i] <= a[i-1]){
			printf("Invalid Value");
			return 0;
		}
	}
		
	int left = 0, right = n-1, mid;
	while(1){
		mid = (left + right) / 2;
		printf("[%d,%d][%d]\n", left, right, mid);
		
		if (a[mid] == x){
			printf("%d", mid);
			break;
		}
		else if(a[mid] > x)
			right = mid - 1;
		else
			left = mid + 1;
			
		if (left > right){
			printf("Not Found");
			break;
		}
	}
		
	return 0;
} 
