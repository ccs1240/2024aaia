#include <stdio.h>
int main(){
int n,ans=1;
scanf("%d",&n);
while(n>0){
int now =n%10;
printf("%d ",now*ans);
n=n/10;
ans*=10;
}
}

