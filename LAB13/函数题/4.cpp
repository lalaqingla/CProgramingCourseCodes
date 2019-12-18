#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] );

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

void ReadString( char *s ){
	int i = 0;
	while((*s=getchar())!='\n')
		s++;
	*s = '\0';
}

void delchar( char *str, char c ){
	char *p = str;
	while(1){
		while(*str == c)
			str ++;
			
		*p = *str;
		str ++;
		p ++;
		
		if (*str == '\0')
			break;
	}
	
	*p = '\0';
}
