str1 = "HackerRank.cOm"
def swap(s):
    newstr = ""
    for i in range(len(s)):
        ascii = ord(s[i])
        if(97<=ascii<=122):
            newstr += (s[i].upper())
        elif(65<=ascii<=90):
            newstr += (s[i].lower())
        else:
            newstr += s[i]
    return newstr
print(swap(str1))