n = int(input())
s = input()
r = 31
m = 1234567891
summ = 0

for i in range(n):
    num = ord(s[i]) - ord('a') + 1
    summ = summ + num * r**i

ans = summ % m

print(ans)
