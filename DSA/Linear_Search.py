def linear_search(list, target):
    for i in range(len(list)):
        if(list[i]==target):
            return i

def verify(list, target):
    output = linear_search(list, target)
    if(output is not None):
        print("The target value", target, "is at index", output)
    else:
        print("The target value",target,"is not in the list.")


list=[1, 3, 4, 2, 6, 3, 9, 0, 3, 30, 322, 45, 95]
target=3
verify(list, target)