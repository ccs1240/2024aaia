#week12-2.py 列出N以下的所有質數
#week12-1.py
n=int(input('請輸入一個數'))
def isPrime(n):
  for i in range(2,n):
    if n%i ==0:
      return False 
  return True

for i in range(2,n+1):
  if isPrime(i):print(i,end=' ')