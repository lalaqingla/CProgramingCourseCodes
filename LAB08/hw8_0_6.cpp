#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

int fib( int n ){
	int a=1, b=1;
	if (n <= 2) 
		return 1;
	for(int i = 3; i <= n; ++i){
		int tmp = a;
		a = b;
		b = tmp + a;
	}
	return b;
}

void PrintFN( int m, int n ){
	int count = 0, j = 1;
	while(1){
		int tmp = fib(j++);
		if (tmp < m)
			continue;
		else if (tmp <= n){
			if (count == 0)
				printf("%d", tmp);
			else
				printf(" %d", tmp);
			count ++;
		}
		else
			break;
	}
	if (count == 0)
		printf("No Fibonacci number");
}
