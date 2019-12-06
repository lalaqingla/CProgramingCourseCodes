#include<stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d\n", &n);
	char ch[10], ch_out[10];
	char jiandao[] = "JianDao";
	char chuizi[] = "ChuiZi";
	char bu[] = "Bu";
	char end[] = "End";
	int k = 1;
		
	while(1){
		
		int i = 0;
		while((ch[i]=getchar())!='\n')
			i++;
		ch[i] = '\0';
		
		if(k % (n+1) == 0){
			if (strcmp(ch, end) == 0)
				break;
			else
				strcpy(ch_out, ch);
		}
		else{
			if (strcmp(ch, jiandao) == 0)
				strcpy(ch_out, chuizi);
			else if (strcmp(ch, chuizi) == 0)
				strcpy(ch_out, bu);
			else if (strcmp(ch, bu) == 0)
				strcpy(ch_out, jiandao);
			else if (strcmp(ch, end) == 0)
				break;
		}
		printf("%s\n", ch_out);
		
		k++;
	}
	return 0;
}
