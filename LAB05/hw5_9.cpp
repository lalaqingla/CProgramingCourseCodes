#include <stdio.h>
#include <math.h>
int main(){
	float y, x;
	scanf("%f", &y);
	x = sqrt(y) - 1;
	if(x == (int)(x))
		printf("%.0f", x);
	else
		printf("None");
	return 0;
}
