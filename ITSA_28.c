#include <stdio.h>
#include <stdlib.h>

int input, max , count=0;

int main() {
    scanf("%d", &input);
        for (int j = 1; j <= input; j++) {
            if (input % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            printf("YES\n");
        }
        else{ printf("NO\n");
        }
   
    return 0;
}
