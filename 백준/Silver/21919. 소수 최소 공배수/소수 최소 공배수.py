import math

n = int(input())
A = list(map(int, input().split()))
MAX = 1000000
list = [0, 0] + [1] * (MAX-1)
prime = []

for i in range(2, MAX+1):
  if list[i]:
    for j in range(i*2, MAX+1, i):
      list[j] = 0

for i in range(n):
  if list[A[i]]:
    prime.append(A[i])

if not len(prime):
  print("-1")
else:
  result = prime[0]
  for i in prime[1:]:
    result = math.lcm(result, i)
  print(result)