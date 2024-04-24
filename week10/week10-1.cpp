///leetcode 1137
///請問第N項答案
int tribonacci(int n){
    int a[40]={0,1,1}; ///準備前三項
    for(int i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    return a[n];
}
