#include <stdio.h>
int main()
{
	int a[30][30];
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
	scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for (j=0;j<n;j++){
		for (i=m-1;i>=0;i--){
			printf("%2d ",a[i][j]);
		}
			printf("\n");
	}