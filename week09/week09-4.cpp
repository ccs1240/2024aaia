#include <stdio.h>
#include <string.h>
int main()
{
    char line[100];
    printf("請輸入一堆字母，不要有空格，最後跳行結束輸入\n");
    scanf("%s",line);

    int N = strlen(line);
    printf("字串的長度是:%d\n",N);
    ///stropy(a,"Hello");字串拷貝
    ///strcat(a,b); 字串結合 把右邊b接到左邊的a的後面 concatenate
    ///stromp(a,b); 字串比較(竹字母比較,看誰比較大)
}
