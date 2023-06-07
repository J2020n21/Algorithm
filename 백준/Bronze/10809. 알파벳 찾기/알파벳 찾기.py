import string
alphabet = list(string.ascii_lowercase)
S = input()

for i in alphabet:
    if i in S: #S에 해당 알파벳이 있으면
        print(f"{S.index(i)}",end=' ') #S에서 i의 처음 위치를 반환
    else:
        print("-1",end=' ')