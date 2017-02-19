#include <stdio.h>

/*摄氏温度转化为华氏温度*/

int main(){
    float F, C;
    int upper = 300, lower = 0, step = 20;
    C = lower;
    printf("摄氏温度转为华氏温度\n");
    while(C <= upper){
        F = C * 9 / 5 + 32;
        printf("%4.2f\t%4.0f\n", C, F);
        C += step;
    }
}
