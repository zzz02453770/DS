#include <stdio.h>

int main() {
    int Nnumber, input, max=0;;
    scanf("%d", &Nnumber); 
    for (int i = 0; i < Nnumber; i++) {
        scanf("%d", &input);
        if(input > max) {
            max = input;
        }
    }
    printf("%d\n", max);
    return 0;
}
