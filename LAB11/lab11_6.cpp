#include<stdio.h>
int main(){
	
	int n;
	scanf("%d", &n);
	int num[10] = {0};
	for(int i = 0; i < n; ++i){
		int cur_num;
		scanf("%d", &cur_num);
		do{
			num[cur_num % 10] ++;
			cur_num /= 10;
		}while(cur_num > 0);
	}
	
	int m = 0;
	for(int i = 1; i < 10; ++i)
		if(num[i] > num[m])
			m = i;
	printf("%d:", num[m]);
	
	for(int i = 0; i < 10; ++i)
		if(num[i] == num[m])
			printf(" %d", i);
		
	return 0;
}
