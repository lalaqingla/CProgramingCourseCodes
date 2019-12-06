#include<stdio.h>
int main(){
	int max = -1;
	while(1){
		int tmp;
		scanf("%d", &tmp);
		if(tmp < 0)
			break;
		if(tmp > max)
			max = tmp;
	}
	printf("%d", max);
	return 0;
}
