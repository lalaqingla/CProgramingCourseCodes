#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int num[n];
	for(int i = 0; i < n; ++i)
		scanf("%d", &num[i]);

    int max_num=num[0], max_count=1;
	for(int i = 0; i < n; ++i){
        int cur_count = 0;
        for(int j = 0; j < n; ++j)
            if(num[i] == num[j])
                cur_count++;
        
        if(cur_count > max_count){
            max_count = cur_count;
            max_num = num[i];
        }
    }
	printf("%d %d", max_num, max_count);
	
	return 0; 
}
