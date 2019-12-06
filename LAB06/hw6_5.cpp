#include<stdio.h>
int main(){
	long n;
	scanf("%ld", &n);
	if(n==0){
		printf("0 ");
		return 0;
	}
	int m[10];
	int i = 0;
	while(n>0){
		m[i++] = n % 10;
		n /= 10;
	}
	for(int j = i-1; j >= 0; --j){
		printf("%d ", m[j]);
	}
	return 0;
}
