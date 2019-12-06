#include <stdio.h>
int main(){
	int a=0, b=0, c=0, d=0;
	for(int i = 0; i < 10; ++i){
		char ch = getchar();
		if((ch <= 'z'&& ch >= 'a')||(ch <= 'Z'&& ch >= 'A'))
			a++;
		else if (ch == ' '|| ch == '\n')
			b++;
		else if (ch <= '9' && ch >= '0')
			c++;
		else
			d++;
	} 
	printf("letter = %d, blank = %d, digit = %d, other = %d", a, b, c, d);
	return 0;
}
