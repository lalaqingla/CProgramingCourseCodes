#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int count = 0;
	for(int cnt_w = (int)(n/2); cnt_w >= 0; --cnt_w){
		for(int cnt_m = (int)((n - cnt_w*2)/3); cnt_m >= 0; --cnt_m){
			int cnt_c = n - cnt_w - cnt_m;
			if(cnt_c % 2 != 0)
				continue;
			if(cnt_c / 2 + cnt_w * 2 + cnt_m * 3 == n){
				count ++;
				printf("men = %d, women = %d, child = %d\n", cnt_m, cnt_w, cnt_c);
			}
		}
	}
	if(count == 0)
		printf("None");
	return 0;
}
