#include<stdio.h>
#include<math.h>
int ss(long n){
	for(long i = 2; i <= sqrt(n); ++i){
		if(n%i==0){
			return -1;
		}
	}
	return 1;
}
int main(){
	long n;
	scanf("%ld", &n);
	long p;
	for(p=2; p <= n / 2; ++p){
		if(ss(p)<0)
			continue;
		if(ss(n-p)<0)
			continue;
		break;
	}
	printf("%ld = %ld + %ld", n, p, n-p);
	return 0;
}
