# include <stdio.h>
int main ()
{
    int a = 10;
    printf("%5d    佔5格\n",a);
    float pi = 3.14159265358979328462643383279;
    printf("%浮點數只有8格\n",pi);
    printf("%f 如果印12格，結果式對齊右邊，可惡\n",pi);
    printf("%12.10f印12格，點的右邊10格，但不準\n",pi);
    double pi2=3.14159265358979323846243383279;
    printf("%12.10f 兩倍浮點數double印點右邊10格\n",pi2);
}
