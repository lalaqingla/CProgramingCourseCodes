#include<stdio.h>
#include<math.h>
int main(){
	char num[80], ch;
	int flag=1, first=0, i=0;
	while((ch=getchar())!='#'){
		if (first == 0 && ch == '-')
			flag = -1;
		if (ch >= '0' && ch <= '9' || ch >= 'a' && ch <= 'f' || ch >= 'A' && ch <= 'F'){
			first = 1;
			num[i++] = ch;
		}
	}
	
	int number = 0;
	for(int j = i-1, t = 0; j >= 0; --j, ++t){
		if (num[j] >= '0' && num[j] <= '9')
			number += pow(16, t) * (num[j] - '0');
		else if (num[j] >= 'a' && num[j] <= 'f')
			number += pow(16, t) * (num[j] - 'a' + 10);
		else
			number += pow(16, t) * (num[j] - 'A' + 10);
	}
		
		
	printf("%d", number * flag);
	
	return 0;
}
