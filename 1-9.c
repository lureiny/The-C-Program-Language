#include <stdio.h>

/*用一个空格替换多个连续空格*/

int main(){
    int c, num = 0;
    while ((c = getchar()) != '\n'){
        if (c == ' ' && num == 0){
            putchar(c);
            num += 1;
        }
        else if (c != ' '){
            putchar(c);
            num = 0;
        }
    }
    printf("\n");
    return 0;
}
