#include <stdio.h>

#define first 1
#define other 0

int main(){
    int c, state;
/*  内置的字符串进行处理
 *  char str[] = "Hello \t    world\n\t    what is your name?";
 *  int num = sizeof(str);
 *  for (int i = 0; i < num; i++){
 *      int c = str[i]
 *  }
 * */
    while( (c = getchar() ) != '\n'){
        if ( c != '\t' && c != ' ' && c !='\n' ){
            putchar(c);
            state = first;
        }
        else if ( state == first ){
            printf("\n");
            state = other;
        }
    }
}
