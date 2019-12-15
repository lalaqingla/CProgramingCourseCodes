#include <stdio.h>
#define MAXN 10

void sort( int a[], int n );

int main()
{
    int i, n;
    int a[MAXN];

    scanf("%d", &n);
    for( i=0; i<n; i++ )
        scanf("%d", &a[i]);

    sort(a, n);

    printf("After sorted the array is:");
    for( i = 0; i < n; i++ )
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}

void sort( int a[], int n ){
	for(int i = 0; i < n-1; ++i){
		int min = i;
		for(int j = i+1; j < n; ++j)
			if (a[j] < a[min])
				min = j;
		int tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}
}
