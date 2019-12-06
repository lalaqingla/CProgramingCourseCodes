#include<stdio.h>
int main(){
	char ch;
	int count = 0, flag = 1;
	while((ch=getchar())!='\n'){
		if (ch == ' '){
			if(flag == 0){
				count ++;
				flag = 1;
			}
		}
		else
			flag = 0;
	}
	if (flag == 0)
		count ++;
	printf("%d", count);
	return 0;
}
