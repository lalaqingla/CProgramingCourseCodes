#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a1=0, a2=0;
	float a3=0, n3=0;
	for(int i = 0; i < n - 1; ++i){
		int m;
		scanf("%d ", &m);
		if(m % 3 == 0){
			if (m > a1)
				a1 = m;
		}
		if(m%3==1)
			a2 ++;
		if(m%3==2){
			a3 += m;
			n3 ++;
		}
	}
	
	int m;
	scanf("%d", &m);
	if(m % 3 == 0){
		if (m > a1)
			a1 = m;
	}
	if(m%3==1)
		a2 ++;
	if(m%3==2){
		a3 += m;
		n3 ++;
	}
		
	if (n3 >= 1)
		a3 = a3 / n3;
		
	if (a1 != 0)
		printf("%d ", a1);
	else 
		printf("NONE ");
		
	if (a2 != 0)
		printf("%d ", a2);
	else
		printf("NONE ");
		
	if (a3 != 0)
		printf("%.1f", a3);
	else
		printf("NONE");
		
		
	return 0;
}
