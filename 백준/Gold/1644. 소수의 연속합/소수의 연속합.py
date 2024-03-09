n = int(input())
list = [0, 0] + [1] * (n-1)
p = []
cnt = 0

for i in range(2, n+1):
  if list[i]:
    p.append(i)
    for j in range(i*2, n+1, i):
      list[j] = 0

for i in range(len(p)):
  k = 0
  for j in range(i, len(p)):
    k += p[j]
    if n == k:
      cnt += 1
      break
    elif k > n:
      break

print(cnt)
