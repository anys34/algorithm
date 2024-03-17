n = int(input())
MAX = 1000000

list = [0, 0] + [1] * (MAX-1)
prime = [0]

for i in range(2, MAX+1):
  if list[i]:
    prime.append(i)
    for j in range(i*2, MAX+1, i):
      list[j] = 0

print(prime[n])
