
import sys
from collections import deque
n = int(sys.stdin.readline())       
q = deque([])
for i in range(n):
    s = sys.stdin.readline().split()         #input vs sys.stdin.readline() 
    if s[0] == 'push':                       #input은 prompt message를 풀력하고 개행문자를 삭제한다
        q.append(s[1])                       #sys,stdin.readline()은 prompt message를 인수로 받지 않는다.
    elif s[0] == 'pop':
        if not q:
            print(-1)
        else:
            print(q.popleft())
    elif s[0] == 'size':
        print(len(q))
    elif s[0] == 'empty':
        if not q:
            print(1)
        else:
            print(0)
    elif s[0] == 'front':
        if not q:
            print(-1)
        else:
            print(q[0])
    elif s[0] == 'back':
        if not q:
            print(-1)
        else:
            print(q[-1])