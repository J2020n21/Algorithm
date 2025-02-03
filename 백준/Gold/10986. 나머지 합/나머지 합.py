import sys
input = sys.stdin.readline
n,m = map(int,input().split())
arr = list(map(int,input().split()))
s=[0]*n #구간합
c = [0]*m # 같은 나머지의 인덱스 카운트
temp = 0
ans = 0
#구간합s
s[0] = arr[0]
for i in range(1,n):
  s[i] = s[i-1] + arr[i]
  #s[0] 값이 있으므로 range(1,n) 가능

#변형구간
for i in range(n):
  r = s[i] % m
  if r == 0:
    ans += 1 #구간합 자체가 0인경우 카운트
  c[r] += 1 #나머지가 같은 인덱스의 갯수 = 나머지가 1인 것의 개수

#경우의 수 세기
for i in range(m):
  #나머지가 같은 인덱스 중 2개를 뽑는 수
  if c[i] > 1: #구간이 존재한다면
    ans += (c[i] * (c[i] - 1)) / 2

print(int(ans))