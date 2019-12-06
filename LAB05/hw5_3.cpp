#include<stdio.h>
#include<string.h>
int main(){
	
	char ch[70]; // use "ch" to save the operation of the human
	char state[70] = { 'i' }; // use "state" to save the state of mouse
	int num = 0; // use "num" to calculate the money
	
	int i = 0;
	while((ch[i]=getchar())!='$')
		i++;
	ch[i] = '\0';
	
	int j = 0;
	
	// the first day 
	if (ch[0] == 'X'){
		state[j++] = 'U';
		state[j++] = '-';
	}
	else if (ch[0] == 'T'){
		
		num += 10;
		num -= 3;
		
		state[j++] = 'D';
		state[j++] = '-';
		state[j++] = '-';
	}
	else if (ch[0] == 'C'){
		
		num -= 3;
		
		state[j++] = '!';
		state[j++] = '+'; // use "+" to tag that the mouse state is excited 
		state[j++] = '+';
	}
	
	// other days 
	// "d" means the day
	for (int d = 1; d < i; ++d){
		if (state[d] != '-'){
			if (ch[d] == 'X'){
				state[d] = 'U';
				if(state[d+1] != '+')
					state[d+1] = '-';
			}
			else if (ch[d] == 'T'){
				
				num += 10;
				num -= 3;
				
				state[d] = 'D';
				if(state[d+1] != '+') // when the mouse isn't excited, the mouse wound not go out.
					state[d+1] = '-';
				if(state[d+2] != '+')
					state[d+2] = '-';
			}
			else if (ch[d] == 'C'){
				
				num -= 3;
				
				state[d] = '!';
				state[d+1] = '+';
				state[d+2] = '+';
			}
		}
	}
	
	state[i] = '\0';
	printf("%s\n%d", state, num);
	return 0;
}
