#include <stdio.h>
int isPrime(int n){
    for(int i=2;i<n;i++){
        if (n%i==0) return 0;
    }
    return 1;
}

int main()
{
    printf("�п�J�@�Ӽ�");
    int n;
    scanf("%d",&n);
    int ans=0;
    for(int i=2;i<=n;i++){
    if(isPrime(i)){
    printf("%d\n",i);
    ans++;
        }
    }
    printf("�`�@��%d�ӽ��\n",ans);

}
