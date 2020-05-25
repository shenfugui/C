#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    for(i=9;;i++){
        int a = i/8/8/8;
        if(i%8==1&&i/8%8==1&&i/8/8%8==7){
            if(i%17==4&&i/17%17==15&&i/17/17==a*2){
                printf("%d\n",i);
                return 0;
            }
        }
    }
    return 0;
}
