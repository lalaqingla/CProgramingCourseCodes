#include<stdio.h>
#include<string.h>
int main(){
	char s[5][80];
	scanf("%s %s %s %s %s", &s[0], &s[1], &s[2], &s[3], &s[4]);
	
	for(int i = 0; i < 4; ++i){
		int min = i;
		for(int j = i+1; j < 5; ++j){
			if (strcmp(s[j], s[min]) < 0)
				min = j;
		}
		char tmp[80];
		strcpy(tmp, s[i]);
		strcpy(s[i], s[min]);
		strcpy(s[min], tmp);
	}
	printf("After sorted:\n");
	for(int i = 0; i < 5; ++i)
		printf("%s\n", s[i]);
	
	return 0;
}
