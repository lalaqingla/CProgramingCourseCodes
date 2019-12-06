#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int num[n];
	for(int i = 0; i < n; ++i){
		int cur_num;
		scanf("%d", &cur_num);
		
		int j;
		for(j = 0; j < i; ++j)
			if (cur_num > num[j])
				break;
		
		for(int k = i; k > j; --k)
			num[k] = num[k-1];
		
		num[j] = cur_num;
	}
	
	for(int i = 0; i < n; ++i)
		if (i == 0)
			printf("%d", num[i]);
		else
			printf(" %d", num[i]);
		
	return 0;
}
