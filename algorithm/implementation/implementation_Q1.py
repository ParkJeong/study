import sys
import time

# input = sys.stdin.readline

start_time = time.time()

# n = input()
# arr = input().split()
n = 5
arr = ["R", "R", "R", "U", "D", "D"]
x, y = 1, 1
for direction in arr:
    if direction == "U" and x > 1:
        x -= 1
    elif direction == "R" and y < n:
        y += 1
    elif direction == "L" and y > 1:
        y -= 1
    elif direction == "D" and x < n:
        x += 1
print(x, y)

end_time = time.time()

print(f"time: {end_time - start_time}")
