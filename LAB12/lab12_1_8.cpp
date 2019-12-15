#include<stdio.h>
int main(){
	char ch;
	int s[127] = {0};
	while((ch=getchar())!='\n')
		if (s[ch] == 0)
			s[ch] = 1;
	
	for(int i = 32; i < 127; ++i)
		if (s[i] == 1)
			printf("%c", i);
	
	return 0;
}
