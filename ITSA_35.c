#include <stdio.h>

int input;
int main() {
    scanf("%d", &input);
    if ((input % 4 == 0 && input % 100 != 0) || (input % 400 == 0)) {
        printf("Bissextile Year\n"); 
    } else {
        printf("Common Year\n"); 
    }
    return 0;
}
