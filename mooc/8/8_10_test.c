//检验并打印幻方矩阵

#include<stdio.h>
#define N 5
int main(){
    int i,j,sum1=0,sum2=0,flag=1;
    int a[N][N]={0};
    int row[N]={0},col[N]={0};
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d",&a[i][j]);
            row[i]+=a[i][j];
            col[j]+=a[i][j];
            if(i==j) sum1+=a[i][j];
            if(i+j==N-1) sum2+=a[i][j];
        }
    }
    for(i=0;i<N;i++){
        if(sum1!=sum2||row[i]!=sum1||col[i]!=sum1)
            flag=0;
    }
    if(flag){
        printf("It is a magic square!\n");
        for(i=0;i<N;i++){
            for(j=0;j<N;j++)
                printf("%4d",a[i][j]);
            printf("\n");
        }
    }else printf("It is not a magic square!\n");
    return 0;
}
