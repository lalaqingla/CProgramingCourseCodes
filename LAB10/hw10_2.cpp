#include<stdio.h>
int main(){
	// read data
	int n;
	long x;
	scanf("%d %ld", &n, &x);
	long a[n];
	for(int i = 0; i < n; ++i)
		scanf("%ld", &a[i]);
	
	// count
	int idx[n], count=0;
	for(int i = 0; i < n; ++i)
		if(a[i]==x)
			idx[count++] = i;
	
	// print
	if (count == 0)
		printf("Not Found");
	else
		for(int i = 0; i < count; ++i)
			printf("%d\n", idx[i]);
	

	return 0;
}
