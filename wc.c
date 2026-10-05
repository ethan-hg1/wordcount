#include<stdio.h>
#include<ctype.h>



int main(void) {
    long chars = 0, words = 0, lines = 0;
    int in_word = 0, c;
    
    while ((c = getchar()) != EOF) { //press ctrl+D to exit
        chars++;
    
        if (c == '\n') {
            lines++;
        }

        if (isspace(c)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }
    printf("%ld %ld %ld\n", lines, words, chars);
    return 0;
}