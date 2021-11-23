import sys

def main():
    input = sys.stdin.readline

    coins = [500, 100, 50, 10]
    count = 0

    #change = int(input())
    change = 1260
    for coin in coins:
        if change == 0:
            break
        count += int(change // coin)
        change %= coin

    print(count)

if __name__ == '__main__':
    main()
