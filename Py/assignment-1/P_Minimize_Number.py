num=int(input())
arr=list(map(int,input().split()))

cnt=0
while True:
    for i in range(num):
        if arr[i]%2!=0:
            print(cnt)
            exit()
    for i in range(num):
        arr[i] //= 2
    
    cnt += 1