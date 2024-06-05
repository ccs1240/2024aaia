#16
from collections import Counter #import collections
words=["bella","lebel","roller"]
for i in range(3):
  counter =Counter(words[i]) #counter=collections.Counter(word[i])
  print(words[i])
  print(counter)
ans =Counter(words[0])&Counter(words[1])&Counter(words[2]) #all of Counter before have a collections and a punctuation
print(ans)