#include<stdio.h>

int main(){
	char ch;
	int num = 0;
	while((ch=getchar())!='\n')
		if (ch >= '0' && ch <= '9')
			num = num * 10 + (ch - '0');
		
	printf("%d", num);
	
	return 0;
}
