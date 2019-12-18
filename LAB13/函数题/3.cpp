#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] );

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

void ReadString( char *s ){
	int i = 0;
	while((*s=getchar())!='\n')
		s++;
	*s = '\0';
}

void strmcpy( char *t, int m, char *s ){
	for(int i = 0; ; ++i){
		if (*t == '\0')
			break;
		if (i < m - 1){
			t ++;
			continue;
		}
		*s = *t;
		s ++;
		t ++;
	}
	*s = '\0';
}
