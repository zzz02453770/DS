#include <stdio.h>

int main() {
    int Nnumber, x, y;;
    scanf("%d", &Nnumber); 
    for (int i = 0; i < Nnumber; i++) {
        scanf("%d", &x);
        if (x >= 50 && x <= 70) {
            y = x; 
        } else {
            y = 100; 
        }
        printf("%d\n", y);
    }
    return 0;
}
