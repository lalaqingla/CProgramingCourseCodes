#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

int CountDigit( int number, int digit ){
	if (number == 0 && digit == 0)
		return 1;

	if (number < 0)
		number *= -1;
	
	int count = 0;
	while(number > 0){
		int tmp = number % 10;
		if (tmp == digit)
			count ++;
		number /= 10;
	}
	return count;
}
