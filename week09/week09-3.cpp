#include <stdio.h>
int main()
{
    printf("�п�J29�Ӧr��,���঳�Ů�b�̭�:\n");
    char line[30];
    scanf("%s",line);
    printf("�o�Ӧr�O:%s �̭����r�A���O�O:\n");

    for(int i=0;i<30;i++){
    printf("��%d�Ӧr��: %c�������Ʀr�O:%d\n",i,line[i],line[i]);
    }
}
