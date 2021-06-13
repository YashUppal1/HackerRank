if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    maxnum = max(arr)
    list2 = []
    for i in range(len(arr)):
        if(arr[i]!=maxnum):
            list2.append(arr[i])
    print(max(list2))