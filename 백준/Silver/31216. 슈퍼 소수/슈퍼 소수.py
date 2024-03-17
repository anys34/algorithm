t = int(input())
MAX = 1000000

list = [0, 0] + [1] * (MAX-1)
super = []

for i in range(2, MAX+1):
  if list[i]:
    for j in range(i*2, MAX+1, i):
      list[j] = 0

tmp = 0

for i in range(2, MAX+1):
  if list[i]:
    tmp += 1
    if list[tmp]:
      super.append(i)

for _ in range(t):
  n = int(input())
  print(super[n-1])
    