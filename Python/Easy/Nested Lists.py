if __name__ == '__main__':
    studentList = []
    scoreList = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        scoreList.append(score)
        studentList.append([name, score])
    studentList.sort()
    scoreList.sort()
    secondLowest = scoreList[1]
    for _ in range(len(scoreList)):
        if(studentList[_][1]!=min(scoreList)):
            if(studentList[_][1]==secondLowest):
                print(studentList[_][0])
