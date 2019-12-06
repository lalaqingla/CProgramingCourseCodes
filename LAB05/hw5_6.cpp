#include <stdio.h>
#include <math.h>
int main(){
	float x, y;
	scanf("%f", &x);
	if(x < 0 && x != 3)
		y = x;
	else if (x >= 0 && x < 10 && x != 2 && x != 3)
		y = x + 1;
	else
		y = sin(3*x);
	printf("%.6f", y);
	return 0;
}
