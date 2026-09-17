#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("enter number of rows in matrix:");
    scanf("%d",&r);

    printf("enter number of columns in matrix:");
    scanf("%d",&c);
    int a[r][c],sumr=0,sumc=0;
    printf("enter numbers in matrix:");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }

    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sumr=sumr+a[i][j];

        }
        printf("sum of row%d:%d\n",i+1,sumr);
        sumr=0;
    }
    for(j = 0; j < c; j++) {
        for(i=0;i<r;i++){
            sumc=sumc+a[i][j];

        }

        printf("sum of column %d:%d\n",j+1,sumc);
        sumc=0;
    }

}