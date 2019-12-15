#include<stdio.h>
int main(){
	char ch, s[80];
	int i = 0;
	while((ch=getchar())!='\n')
		s[i++] = ch;
	
	char m;
	scanf("%c", &m);
	
	int count = 0;
	for(int j = 0; j < i; ++j)
		if (s[j] == m)
			count ++;
			
	printf("%d", count);
	
	return 0;
}
