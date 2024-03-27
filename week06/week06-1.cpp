#include <stdio.h>
int main()
{
    int b[4];
    int a[4]={10,20,30,40};
    b[0]=9;
    b[1]=9;
    b[2]=7;
    b[3]=6;
    for(int i=0; i<4; i++){
        printf("i:%d a[i]:%d b[i]:%d\n",i,a[i],b[i]);
    }
}
