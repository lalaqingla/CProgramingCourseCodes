#include <stdio.h>
int main(){
	int a, b;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	int result;
	switch(c){
		case '+': result = a + b; printf("%d", result); break;
		case '-': result = a - b; printf("%d", result); break;
		case '*': result = a * b; printf("%d", result); break;
		case '/': result = a / b; printf("%d", result); break;
		case '%': result = a % b; printf("%d", result); break;
		default: printf("ERROR");
	}
	return 0;
}
