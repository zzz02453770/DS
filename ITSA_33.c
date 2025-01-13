#include <stdio.h>

int input;
int main() {
    scanf("%d", &input);
    switch (input) {
        case 1:
            printf("Person\n");
            break;
        case 2:
            printf("Fairy\n"); 
            break;
        case 3:
            printf("Dwarf\n"); 
            break;
    }
    return 0;
}
