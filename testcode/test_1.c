#include <stdio.h>

void fun(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] <= 'z' && str[i] >= 'a') str[i] -= 32;
        i++;
    }
}

int main() {
    char str[40];
    gets(str);
    fun(str);
    puts(str);
}

