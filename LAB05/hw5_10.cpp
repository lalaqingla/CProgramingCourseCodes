#include <stdio.h>
int main(){
	int n, sum;
	scanf("%d", &n);
	if(n <= 10)
		sum = n * 2;
	else
		sum = 10 * 2 + (n-10)*3;
	printf("%d", sum);
	return 0;
}
