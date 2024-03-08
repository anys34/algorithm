m, n = map(int, input().split())
list = [0, 0] + [1] * (n+1)

for i in range(2, n+1):
  if list[i]:
    for j in range(i*2, n+1, i):
      list[j] = 0

for i in range(m, n+1):
  if list[i]:
    print(i)
