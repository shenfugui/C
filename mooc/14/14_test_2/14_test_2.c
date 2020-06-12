//
// Created by shenfugui on 2020/6/5.
//

#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    char *p = str;
    printf("Input a string:\n");
    gets(p);
    int len = strlen(p);
    for (int i = 0; i < len-1; i++) {
        for (int j = i+1; j < len; j++) {
            if (*(p+i) > *(p+j)) {
                char tmp = *(p+j);
                *(p+j) = *(p+i);
                *(p+i) = tmp;
            }
        }
    }
    printf("%s", p);
    return 0;
}