#include<stdio.h>

int main(){
	int flag = 0;
	char ch;
	int s[26]={0};
	while((ch=getchar())!='\n'){
		if (ch >= 'A' && ch <= 'Z'){
			flag = 1;
			if (s[ch-'A'] == 0){
				s[ch-'A'] = 1;
				printf("%c", ch);
			}
		}
	}
	if (flag == 0)
		printf("Not Found");
	
	return 0;
}
