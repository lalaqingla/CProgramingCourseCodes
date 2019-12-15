#include<stdio.h>
int main(){
	char ch;
	while((ch=getchar())!='#'){
		if (ch >= 'a' && ch <= 'z')
			ch += 'A' - 'a';
		else if (ch >= 'A' && ch <= 'Z')
			ch += 'a' - 'A';
		printf("%c", ch);
	}
	
	return 0;
}
