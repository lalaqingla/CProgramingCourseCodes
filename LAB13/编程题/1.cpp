#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d", &n);
	getchar();
	char s[n][81];
	int min = 0;
	for(int i = 0; i < n; ++i){
		int j = 0;
		gets(s[i]);
		if (strcmp(s[i], s[min]) < 0)
			min = i;
	}
	printf("Min is: %s", s[min]);
	
	return 0;
}
