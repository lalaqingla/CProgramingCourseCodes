#include<stdio.h>
int main(){
	long n;
	scanf("%ld", &n);
	if(n==0)
		printf("0 ");
	else{
		while(n>0){
			printf("%d ", n%10);
			n /= 10;
		}
	}
	return 0;
}
