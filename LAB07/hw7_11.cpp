#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic( int number ){
	int count = 0, n = number;
	while(n > 0){
		n /= 10;
		count ++;
	}
	n = number;
	int sum = 0;
	for(int i = 0; i < count; ++i){
		int digit = n % 10;
		int mul = 1;
		for(int j = 0; j < count; ++j){
			mul *= digit;
		}
		sum += mul;
		n /= 10;
	}
	if (sum == number)
		return 1;
	else 
		return 0;
}

void PrintN( int m, int n ){
	for(int i = m + 1; i < n; ++i){
		if(narcissistic(i))
			printf("%d\n", i);
	}
}
