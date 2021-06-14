def binary_search(list, target):
    first = 0
    last = len(list)-1
    while first <= last:
        midpoint = (first + last)//2
        if(list[midpoint]==target):
            return midpoint
        elif(list[midpoint]<target):
            first = midpoint + 1
        else:
            last = midpoint - 1
    return None

def verify(list, target):
    output = binary_search(list, target)
    if(output is not None):
        print("The target value", target, "is at index", output)
    else:
        print("The target value",target,"is not in the list.")


list=[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
verify(list, 1)