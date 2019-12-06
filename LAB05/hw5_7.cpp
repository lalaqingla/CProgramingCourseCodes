#include <stdio.h>
int main(){
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	int tmp;
	if (x > y){
		tmp = x;
		x = y;
		y = tmp;
	}
	
	if (x > z){
		tmp = x;
		x = z;
		z = tmp;
	}
	
	if (y > z){
		tmp = y;
		y = z;
		z = tmp;
	}
	printf("x=%d,y=%d,z=%d", x, y, z);
	return 0;
}
