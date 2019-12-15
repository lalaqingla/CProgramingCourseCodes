#include<stdio.h>
int main(){
	char c;
	c = getchar();
	getchar();
	
	char ch;
	int i = 0, max_idx = 0, flag = 0;
	while((ch=getchar())!='\n'){
		if (ch == c){
			max_idx = i;
			flag = 1;
		}
		i++;
	}
	
	if (flag != 0)
		printf("index = %d", max_idx);
	else 
		printf("Not Found");
	
	return 0;
}
