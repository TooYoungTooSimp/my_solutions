a, b = map(int, input().split())
if b - a >= 10:
    print(0)
else:
    ans = 1
    for i in range(a + 1, b + 1):
        ans = ans * i % 10
    print(ans)
