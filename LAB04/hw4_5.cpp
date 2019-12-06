#include <stdio.h>
int main(){
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	int i = 0;
	while (i++ < 5){
		int n;
		scanf("%d", &n);
		float price;
		if (n == 1)
			price = 3.00;
		else if (n == 2)
			price = 2.50;
		else if (n == 3)
			price = 4.10;
		else if (n == 4)
			price = 10.20;
		else if (n == 0)
			break;
		else 
			price = 0;
		printf("price = %.2f\n", price);
	}
	return 0;
}
