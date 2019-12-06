#include<stdio.h>
int main(){
	int y, m, d;
	scanf("%d/%d/%d", &y, &m, &d);
	int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int flag = 0;
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		flag = 1;
	int sum = 0;
	for(int i = 0; i < m-1; ++i)
		sum += day[i];
	sum += d;
	if (flag == 1 && m >= 3)
		sum += 1;
	printf("%d", sum);
	return 0;
}
