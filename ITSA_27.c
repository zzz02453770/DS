#include <stdio.h>
#include <math.h>

 char input;

int main() {
    scanf("%c", &input);
    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u'
        ||input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U') {
        printf("母音\n");
    }
    else {
        printf("子音\n");
    }
    return 0;
}
