#include<string.h>
#include<stdio.h>
int main(){
  char a[100],c;scanf("%s",&a);
	int n=strlen(a);
	for(int i=0;i<n;i++){
		printf("%c",a[i]);
		if((n-1-i)%3==0&&i!=n-1)printf(",");
	}

}
