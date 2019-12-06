#include<stdio.h>
int main(){
	int lower, upper;
	scanf("%d %d", &lower, &upper);
	if (lower > upper)
		printf("Invalid.");
	else{
		printf("fahr celsius\n");
		for(int fahr = lower; fahr <= upper; fahr+=2){
			float celsius = 5 * (fahr - 32) / 9.0;
			printf("%d%6.1f\n", fahr, celsius);
		}
	}
	return 0;
}
