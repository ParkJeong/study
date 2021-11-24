import sys
import time
start_time = time.time()
input = sys.stdin.readline

h = int(input())

count = 0
for i in range(h + 1):
    for j in range(60):
        for k in range(60):
            if "3" in str(i) + str(j) + str(k):
                count += 1
print(count)
end_time = time.time()
print(end_time - start_time)
exit()





# target = input()
target = 5

include_three = 60 ** 2 - (5 * 9) ** 2
full = 6 * 10 * 6 * 10
if target == 23:
    total = include_three * (target - 2) + full * 3
elif target >= 13:
    total = include_three * (target - 1) + full * 2
elif target >= 3:
    total = include_three * target + full
else:
    total = include_three * (target + 1)

print(total)

end_time = time.time()

print(end_time - start_time)
