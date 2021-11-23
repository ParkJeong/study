import sys

input = sys.stdin.readline


#n, m, k = map(int, input().split())
#arr = list(map(int, input().split()))

n, m, k = (5, 8, 3)
arr = [2, 4, 5, 4, 6]

arr.sort(reverse=True)

the_biggest_num_set = m // (k + 1)
the_biggest_num = m - the_biggest_num_set * (k + 1)

result = the_biggest_num * arr[0] + the_biggest_num_set * (arr[0] * k + arr[1])

print(result)
