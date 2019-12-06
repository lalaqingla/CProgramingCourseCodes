#include<stdio.h>
int main(){
	
	int n1;
	scanf("%d", &n1);
	int num1[n1], idx1=0;
	for(int i = 0; i < n1; ++i){
		int cur_num;
		scanf("%d", &cur_num);
		int flag = 0;
		for(int j = 0; j < idx1; ++j)
			if (num1[j] == cur_num){
				flag = 1;
				break;
			}
		if (flag == 0)
			num1[idx1++] = cur_num;
	}
	
	int n2;
	scanf("%d", &n2);
	int num2[n2], idx2=0;
	for(int i = 0; i < n2; ++i){
		int cur_num;
		scanf("%d", &cur_num);
		int flag = 0;
		for(int j = 0; j < idx2; ++j)
			if (num2[j] == cur_num){
				flag = 1;
				break;
			}
		if (flag == 0)
			num2[idx2++] = cur_num;
	}
	
	int nn_flag = 0;
	for(int i = 0; i < idx1; ++i){
		int flag = 0;
		for(int j = 0; j < idx2; ++j)
			if (num2[j] == num1[i]){
				flag = 1;
				break;
			}
				
		if (flag == 0){
			if (nn_flag == 0)
				printf("%d", num1[i]);
			else
				printf(" %d", num1[i]);
			nn_flag = 1;
		}
			
	}
	for(int i = 0; i < idx2; ++i){
		int flag = 0;
		for(int j = 0; j < idx1; ++j)
			if (num2[i] == num1[j]){
				flag = 1;
				break;
			}
		
		if (flag == 0){
			if (nn_flag == 0)
				printf("%d", num2[i]);
			else
				printf(" %d", num2[i]);
			nn_flag = 1;
		}
	}
	
	return 0;
}
