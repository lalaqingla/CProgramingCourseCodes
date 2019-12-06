#include <stdio.h>
int main(){
	int pa, pb;
	scanf("%d %d", &pa, &pb);
	int p1, p2, p3;
	scanf("%d %d %d", &p1, &p2, &p3);
	
	int ppa=0, ppb=0;
	if (p1 == 0) ppa += 1;
	else ppb += 1;
	if (p2 == 0) ppa += 1;
	else ppb += 1;
	if (p3 == 0) ppa += 1;
	else ppb += 1;
	
	if ((pa > pb && ppa >= 1) || ppa == 3)
		printf("The winner is %c: %d + %d", 'a', pa, ppa);
	else
		printf("The winner is %c: %d + %d", 'b', pb, ppb);
	
	return 0;
}
