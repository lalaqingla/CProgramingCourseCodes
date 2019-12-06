#include <stdio.h>
int main(){
	int a, b;
	char c;
	scanf("%d %d %c", &a, &b, &c);
	float result;
	float count;
	float price;
	switch(b){
		case 90: price = 6.95; break;
		case 93: price = 7.44; break;
		default: price = 7.93;
	}
	switch(c){
		case 'm': count = 0.95; break;
		default: count = 0.97;
	}
	result = a * price * count;
	printf("%.2f", result);
	return 0;
}
