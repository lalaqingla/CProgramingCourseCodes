#include<stdio.h>
int main(){
	char ch, s[80];
	int i = 0;
	while((ch=getchar())!='\n')
		s[i++] = ch;
		
	for(int j = i-1; j >= 0; --j)
		printf("%c", s[j]);
	
	return 0;
} 
