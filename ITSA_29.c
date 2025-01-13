#include <stdio.h>
#include <math.h>

int main() {
    int Nnumber , count=0;
    scanf("%d", &Nnumber);
    char array[Nnumber][2];
    int point[Nnumber];
    for (int i = 0; i < Nnumber; i++) {
        scanf("%s %d", array[i],&point[i]); 
        if(point[i]>=60){
            printf("%s\n", array[i]);
            count ++;
        }
    }
    if (count>=ceil(Nnumber/2.0)){
        printf("晉級\n");
    }
    else{
        printf("失敗\n");
    }
    return 0;
}
