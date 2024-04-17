#include <stdio.h>
int main()
{
    printf("請輸入29個字母,不能有空格在裡面:\n");
    char line[30];
    scanf("%s",line);
    printf("這個字是:%s 裡面的字，分別是:\n");

    for(int i=0;i<30;i++){
    printf("第%d個字母: %c對應的數字是:%d\n",i,line[i],line[i]);
    }
}
