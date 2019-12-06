#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

double funcos( double e, double x ){
	double result = 0, item_up = 1, item_down = 1;
	int flag = 1, i = 1;
	while(item_up / item_down >= e){
		
		result += flag * item_up / item_down;
		
		item_up *= pow(x, 2);
		item_down = item_down * i * (i+1);
		
		flag *= -1;
		i += 2;
	}
	result += flag * item_up / item_down;
	return result;
}
