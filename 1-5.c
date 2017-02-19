#include <stdio.h>
#include <time.h>

/*华氏温度转化为摄氏温度*/

int main(){
    float C, F;
    int upper = 300, lower = 0, step = 20;
    F = upper;
    printf("华氏温度转为摄氏温度\n");
    while(F >= lower){
        C = 5 * (F - 32) / 9;
        printf("%2.0f\t%6.3f\n", F, C);
        F -= step;
    }
    return 0;
}
