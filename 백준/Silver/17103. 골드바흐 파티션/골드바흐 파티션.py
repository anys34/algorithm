t = int(input())
MAX = 1000000
list = [0,0] + [1] * (MAX-1)

for i in range(2, int((MAX * 2) ** 0.5)+1):
  if list[i]:
    for j in range(i*2, MAX+1, i):
      list[j] = 0

for _ in range(t):
  n = int(input())
  cnt = 0
  for i in range(n//2+1):
    if list[i] and list[n-i]:
      cnt+=1
  print(cnt)
