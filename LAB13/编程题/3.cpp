#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d", &n);
	char s[80], max_s[80];
	for(int i = 0; i < n; ++i){
		gets(s);
		if (i == 0)
			strcpy(max_s, s);
		else if (strlen(s) > strlen(max_s))
			strcpy(max_s, s);
	}
		
	printf("The longest is: %s", max_s);
	
	return 0;
}
