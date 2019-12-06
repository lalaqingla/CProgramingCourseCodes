#include<stdio.h>
int main(){
	
	int n;
	scanf("%d", &n);
	int num[n];
	int idx=0, nn=0;
	for(int i = 0; i < n; ++i){
		scanf("%d", &num[i]);
		int cur_nn = 1;
		for(int j = 0; j < i; ++j)
			if(num[j] == num[i])
				cur_nn ++;
		if (cur_nn > nn){
			nn = cur_nn;
			idx = i;
		}
	}
	printf("%d %d", num[idx], nn);
		
	return 0;
}
