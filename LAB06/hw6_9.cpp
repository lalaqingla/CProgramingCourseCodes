#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int max = -1;
	for(int i =  0; i < n; ++i){
		int tmp;
		scanf("%d", &tmp);
		if(tmp > max)
			max = tmp;
	}
	printf("%d", max);
	return 0;
}
