#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int count[8]={0};
	for(int i = 0; i < n; ++i){
		int num;
		scanf("%d", &num);
		count[num-1]++;
	}
	
	for(int i = 0; i < 8; ++i)
		printf("%4d%4d\n", i+1, count[i]);
		
	return 0;
}
