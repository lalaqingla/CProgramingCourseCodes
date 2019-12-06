#include <stdio.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

int reverse( int number ){
	int n = 0;
	int flag = 1;
	
	if (number < 0){
		number *= -1;
		flag *= -1;
	}
	
	while (1){
			
		n += number % 10;
		
		number /= 10;
		if (number == 0)
			break;
			
		n *= 10;
			
	}
	
	return n * flag;
}
