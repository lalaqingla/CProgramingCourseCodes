#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if(n < 1 || n > 46){
		printf("Invalid.");
		return 0;
	}
	if(n == 1){
		printf("%11d", 1);
		return 0;
	}
	
	int a=1, b=1, tmp;
	printf("%11d%11d", a, b);
	for(int i = 2; i < n; ++i){
		tmp = a + b;
		printf("%11d", tmp);
		a = b;
		b = tmp;
		if ((i+1) % 5 == 0)
			printf("\n");
	}
	return 0;
}
