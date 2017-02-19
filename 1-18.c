#include <stdio.h>

/*统计空格，制表符，换行符的个数*/

int main(){
    int c = 0;
    while(getchar() == ' ')      //确定统计的内容
        c += 1;
    printf("%d", c);
    return 0;
}
