#include <stdio.h>
int Z=100; ///外面的全域變數
void myFunction()
{
    int x=20;  ///裡面的區域變數
    printf("myFunction()裡面的  X:%d  Z:%d\n",x,Z);
    printf("在離開時，把 X 和 Z 都設成0\n");
    x = 0;
    Z = 0;
}

int main()
{
    int x=10;
    printf("main()裡面的        X:%d  Z:%d\n",x,Z);
    myFunction();
    printf("main()裡面的        X:%d  Z:%d\n",x,Z);

}
