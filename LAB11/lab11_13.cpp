#include<stdio.h>
int main(){
	
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; ++i){
		int n;
		scanf("%d", &n);
		int flag = 0;
		for(int j = 0; j < n; ++j){
			for(int k = 0; k < n; ++k){
				int num;
				scanf("%d", &num);
				if (j > k && num != 0)
					flag = 1;
			}
		}
		if (flag == 1)
			printf("NO\n");
		else
			printf("YES\n");
	}
	
	return 0;
}
