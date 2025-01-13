#include <stdio.h>
#include <math.h>

int count;

int main() {
    scanf("%d", &count);
    if(count>0){
    printf("正數\n");
    }
    else if(count<0) {printf("負數\n");
    }
    else{printf("0\n");}
    return 0;
}
