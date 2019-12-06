#include<stdio.h>
#include<math.h>
int ss(long n){
	if(n==2)
		return 1;
	for(long i = 2; i <= sqrt(n); ++i){
		if(n%i==0)
			return 0;
	}
}
int main(){
	long n;
	scanf("%ld", &n);
	int count = 0;
	for(long i = 2; i <= n; ++i){
		if(ss(i)){
			count ++;
			if(count % 10 == 0)
				printf("%6ld\n", i);
			else
				printf("%6ld", i);
		}
			
	}
	return 0;
}
