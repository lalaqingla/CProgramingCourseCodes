#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	char c = 'A';
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n-i; ++j){
			printf("%c ", c);
			c++;
		}
		printf("\n");
	}
	return 0;
}
