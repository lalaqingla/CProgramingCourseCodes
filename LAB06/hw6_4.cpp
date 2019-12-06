#include<stdio.h>
#include<math.h>
int main(){
	double x;
	scanf("%lf", &x);
	double item = 1, down=1, sum = 1;
	int i=1;
	float eps = 0.00001;
	while(item >= eps){
		item *= x;
		item /= (i++);
		sum += item;
	}
	sum += item;
	printf("%.4lf", sum);
	
	return 0;
}
