n = 10000
list = [0, 0] + [1] * (n*2-1)

for i in range(2, int((n * 2) ** 0.5) + 1):
  if list[i]:
    for j in range(i * 2, n * 2 + 1, i):
      list[j] = 0
c = int(input())

for _ in range(c):
  n = int(input())
  for j in range(n//2, n+1):
    if list[j] and list[n-j]:
      print(n-j, j)
      break
