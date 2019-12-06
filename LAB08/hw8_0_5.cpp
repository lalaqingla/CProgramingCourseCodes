#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
	
int main()
{
    int i, m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

int factorsum( int number ){
	int sum = 0;
	if (number == 1)
		return 1;
	for(int i = 1; i < number; ++i){
		if (number % i == 0)
			sum += i;
	}
	return sum;
}

void PrintPN( int m, int n ){
	int count = 0;
	for(int i = m; i <= n; ++i){
		if (factorsum(i) == i){
			printf("%d = 1", i);
			for(int j = 2; j < i; ++j)
				if (i % j == 0)
					printf(" + %d", j);
			printf("\n");
			count ++;
		}
	}
	if (count == 0)
		printf("No perfect number");
}
