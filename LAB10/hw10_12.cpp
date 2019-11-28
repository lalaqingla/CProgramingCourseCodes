#include<stdio.h>
int main(){
	long n;
	scanf("%ld", &n);
	
	int num[10]={0};
	while(1){
		num[n % 10] ++;
		n /= 10;
		if (n == 0)
			break;
	}
	
	for(int i = 0; i < 10; ++i){
		if (num[i] > 0){
			printf("%d:%d\n", i, num[i]);
		}	
	}
	
	return 0;
}
