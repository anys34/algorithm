n = 123456
list = [0, 0] + [1] * (n*2-1)

for i in range(2, int((n * 2) ** 0.5) + 1):
  if list[i]:
    for j in range(i * 2, n * 2 + 1, i):
      list[j] = 0

while True:
  n = int(input())
  if not n:
    break
  print(sum(list[n+1:n*2+1]))
