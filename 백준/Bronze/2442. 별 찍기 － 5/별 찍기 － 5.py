N = int(input())  # N을 입력받습니다.

for i in range(1, N+1):
    # 공백의 개수는 N-i, 별의 개수는 2*i - 1
    print(' ' * (N - i) + '*' * (2 * i - 1))
