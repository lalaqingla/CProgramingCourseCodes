#include <stdio.h>
#define MAXS 20

void f( char *p );
void ReadString( char *s );

int main()
{
    char s[MAXS];

    ReadString(s);
    f(s);
    printf("%s\n", s);

    return 0;
}

void ReadString( char *s ){
	int i = 0;
	while((*s=getchar())!='\n')
		s++;
	*s = '\0';
}

void f( char *p ){
	int count = 0;
	char *pp = p;
	while(*p != '\0'){
		count ++;
		p ++;
	}
	p --;
	
	for(int i = 0; i < (int)(count / 2); ++i){
		char tmp = *pp;
		*pp = *p;
		*p = tmp;
		
		pp ++;
		p --;
	}
}
