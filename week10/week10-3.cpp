#include <stdio.h>
void myPrint(int a){
    for (int i=0;i<a;i++) printf("星");
    printf("\n");
    ///沒有return , 沒有參數出去
}
int main()
{
    myPrint(5);
    myPrint(4);
    myPrint(3);
    myPrint(2);
    myPrint(1);
}
