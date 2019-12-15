#include <stdio.h>
#include <string.h>

#define MAXN 20
//typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

bool palindrome( char *s ){
	int n = 0;
	while(s[n]!='\0') 
		n++;
	
	int i = 0, j = n - 1;
	while(i<j){
		if (s[i] != s[j])
			return false;
		i++;
		j--;
	}
	return true;
}
