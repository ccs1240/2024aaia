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
    myPrint(c);///���[��L�X�Ӫ��ȡA�P�ɫ�ҥ���I�B�k��J
    myPrint(d);
    int localInt;///local�ܼơA�S�����ȡA�N�|�O�ýX
    printf("globalInt: %d localInt:%d\n",globalInt,localInt);
}
