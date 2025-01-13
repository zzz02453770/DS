#include <stdio.h>
#include <stdlib.h>

int input, money;

int main() {
    scanf("%d", &input);
    money = input*100;
    if (input>=10 && input<=30) {
    money *=0.9;
    }else if (input>=30 && input<100) {
    money *=0.8;
    }else {
    money *=0.7;
    }
    printf("%d\n", money);
    
   
    return 0;
}
