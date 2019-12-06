#include<stdio.h>
int main(){
	int result, n;
	char op;
	int flag = 0;
	scanf("%d", &result);
	while((op = getchar())!='='){
		scanf("%d", &n);
		switch(op){
			case '+': result += n; break;
			case '-': result -= n; break;
			case '*': result *= n; break;
			case '/': 
				if (n != 0) 
					result /= n; 
				else {
					printf("ERROR"); 
					return 0;
				}
				break;
			default: printf("ERROR"); return 0;
		}
	}
	printf("%d", result);
	return 0;
}
