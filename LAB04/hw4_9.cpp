#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int c = (a - b) * 100.0 / b;
    if (c < 10)
        printf("OK");
    else if(c < 50)
        printf("Exceed %d%%. Ticket 200", c);
    else
        printf("Exceed %d%%. License Revoked", c);
    return 0;
}
