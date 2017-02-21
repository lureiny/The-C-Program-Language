#include <stdio.h>

int main(){
    char t[3] = "\\t", b[3] = "\\b";
    char str[] = "Hello,world!\t,I just a test\b!"; 
    int c;
    printf("%s\n", str);
//   对输入进行替换
/*    while (( c = getchar()) != 10 ){
        if ( c == '\t' ){
            printf("%s", t);
        }
        else if ( c == '\b' ){
            printf("%s", b);
        }
        else{
            putchar(c);
        }
    }*/
    int num = sizeof(str);
    int i;
//   对内置的字符串进行处理
    for(i = 0;i <= num;i++){
        if ( str[i] == '\t' ){
            printf("\\t");
        }
        else if ( str[i] == '\b'){
            printf("\\b");
        }
        else{
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}
