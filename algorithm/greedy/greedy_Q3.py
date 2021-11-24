import sys

input = sys.stdin.readline

#n, k = map(int, input().split())

n, k = 25, 5

count = 0
while n > k:
    if n % k != 0:
        n -= n % k
        count += n % k
    else:
        n //= k
    
if n > 1:
    count += n - 1
print(count)
