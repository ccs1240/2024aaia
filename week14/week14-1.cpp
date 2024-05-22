#include <stdio.h>
void myPrint(int x[3][4]){
    for (int i=0;i<3;i++){
        for(int j=0;i<4;j++){
            printf("%2d",x[i][j]);

        }
        printf("\n");
    }
    printf("\n");
}
int d[3][4];
int globalInt;
int main()
{
    int a[3][4];
    int b[3][4]={1,2,3};
    int c[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    myPrint(a);
    myPrint(b);
    myPrint(c);///請觀察印出來的值，同時思考左手I、右手J
    myPrint(d);
    int localInt;///local變數，沒有給值，就會是亂碼
    printf("globalInt: %d localInt:%d\n",globalInt,localInt);
}
