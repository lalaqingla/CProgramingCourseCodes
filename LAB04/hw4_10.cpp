#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int m[5] = {0};
	for (int i = 0; i < n; ++i){
		int score;
		if (i < n-1)
			scanf("%d ", &score);
		else
			scanf("%d", &score);
		if (score >= 90)
			m[0] ++;
		else if(score >= 80)
			m[1] ++;
		else if(score >= 70)
			m[2] ++;
		else if(score >= 60)
			m[3] ++;
		else 
			m[4] ++;
	}
	printf("%d %d %d %d %d", m[0], m[1], m[2], m[3], m[4]);
	return 0;
}
