#include <stdio.h>

int main() {
    char str[] = "hello world";
    char *p = str;
    *p = 'H';
    puts(str);
    puts(p);
    return 0;
}