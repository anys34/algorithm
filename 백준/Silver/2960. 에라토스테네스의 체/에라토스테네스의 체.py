n, k = map(int, input().split())
list = [1] * (n+1)
cnt = 0
finish = False

for i in range(2, n+1):
  if list[i]:
    for j in range(i, n+1, i):
      if list[j]:
        list[j] = 0
        cnt += 1
      if k == cnt:
        print(j)
        finish = True
        break
  if finish:
    break