#include<stdio.h>
int main(){
	int h, m;
	scanf("%d:%d", &h, &m);
	int hh, mm;
	if (h == 12){
		hh = h;
		mm = m;
		printf("%d:%d PM", hh, mm);
	}
	else if(h > 12){
		hh = h - 12;
		mm = m;
		printf("%d:%d PM", hh, mm);
	}
	else{
		hh = h;
		mm = m;
		printf("%d:%d AM", hh, mm);
	}
	
	return 0;
}
