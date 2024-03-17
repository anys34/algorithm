n = int(input())
MAX = 10000
list = [0, 0] + [1] * (MAX-1)
m = []

for i in range(2, MAX+1):
  if list[i]:
    m.append(i)
    for j in range(i*2, MAX+1, i):
      list[j] = 0

for i in range(len(m)-1):
  if n < m[i]*m[i+1]:
    print(m[i]*m[i+1])
    break
