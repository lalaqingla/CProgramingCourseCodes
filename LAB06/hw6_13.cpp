#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if(n < 1)
		printf("Invalid.");
	else{
		long a=1, b=1, tmp;
		int count = 0;
		for(int i = 0; i < n; ++i){
			if((i+1)%5==0)
				printf("%11ld\n", a);
			else
				printf("%11ld", a);
			tmp = a+b;
			a = b;
			b = tmp;
		}
	}
	
	return 0;
}
