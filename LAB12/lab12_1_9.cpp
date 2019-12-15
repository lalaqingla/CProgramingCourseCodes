#include<stdio.h>

int main(){
	char ch;
	while((ch=getchar())!='\n'){
		if (ch >= 'A' && ch <= 'Z')
			ch = 'Z' - (ch - 'A');
		printf("%c", ch);
	}
	
	return 0;
}
