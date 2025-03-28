N = int(input())
a = list(map(int, input().split()))

freq = {}

for num in a:
    if num in freq:
        freq[num] += 1
    else:
        freq[num] = 1

removals = 0

for value, count in freq.items():
    if count != value:
        removals += abs(count - value)

print(removals)
