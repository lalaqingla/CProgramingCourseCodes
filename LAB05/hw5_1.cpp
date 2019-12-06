#include <stdio.h>
int main(){
	
	int n;
	while(scanf("%d\n", &n)£¡=EOF){
		
		for(int i = 0; i < n; ++i){
			char ch1[100], ch2[100];
			int j = 0;
			while((ch1[j] = getchar()) != '\n')
				j++;
			ch1[j] = '\0';
			
			j = 0;
			while((ch2[j] = getchar()) != '\n')
				j++;
			ch2[j] = '\0';
			
			int num = 0;
			int count = 0;
			for(int k = 0; k < j; ++k){
				if (ch1[k] != ch2[k]){
					if(ch1[k] - ch2[k] == 'A' - 'a' || ch1[k] - ch2[k] == 'a' - 'A'){
						count ++;
						continue;
					}
					num ++;
				}
			}
			
			if (num != 0)
				printf("NO!\n");
			else
				printf("YES! %d\n", count);
		}
	}
		
	
	return 0;
}
