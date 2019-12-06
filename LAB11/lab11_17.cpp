#include<stdio.h>
int main(){
	
	int n;
	scanf("%d", &n);
	int a[n][n];
	int count = 0;
	int flag[n][n];
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < n; ++j)
			flag[i][j] = 0;
	
	int	i = 0, j = 0;
	int state = 0; 
	
	while(1){
		a[i][j] = count + 1;
		flag[i][j] = 1;
		
		if (count + 1 == n*n)
			break;
			
		switch(state){
			case 0: j++; break;
			case 1: i++; break;
			case 2: j--; break;
			default: i--;
		}
		
		if (state==0 && (j==n-1 || flag[i][j+1]==1))
			state = 1;
		else if (state==1 && (i==n-1 || flag[i+1][j]==1))
			state = 2;
		else if(state==2 && (j==0 || flag[i][j-1]==1))
			state = 3;
		else if(state==3 && (i==0 || flag[i-1][j]==1))
			state = 0;
			
		count ++;
	}
	
	for(i = 0; i < n; ++i){
		for(j = 0; j < n; ++j)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	
	return 0;
}
