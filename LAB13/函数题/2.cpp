#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s );

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

void ReadString( char *s ){
	int i = 0;
	while((*s=getchar())!='#')
		s++;
	*s = '\0';
}

void StringCount( char *s ){
	int uletter=0, lletter=0, blank=0, digit=0, other=0;
	while(*s != '\0'){
		if (*s >= 'A' && *s <= 'Z')
			uletter ++;
		else if (*s >= 'a' && *s <= 'z')
			lletter ++;
		else if (*s == ' ')
			blank ++;
		else if (*s >= '0' && *s <= '9')
			digit ++;
		else 
			other ++;
		
		s ++;
	}
	printf("%d %d %d %d %d", uletter, lletter, blank, digit, other);
}
