s = input()
cnt_l = 0
cnt_r = 0
arr = []
new_s = ""

for x in s:
    if x == 'L':
        cnt_l += 1
    else:
        cnt_r += 1
    new_s += x

    if cnt_l == cnt_r:
        arr.append(new_s)
        new_s = ""

print(len(arr))
for y in arr:
    print(y)
