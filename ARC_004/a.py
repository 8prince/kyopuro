N = int(input())
p = []
for i in range(N):
	a = tuple(map(int, input().strip().split()))
	p.append(a)

import math

ans = 0
for i in p:
	for j in p:
		dis = math.sqrt((i[0]-j[0])**2+(i[1]-j[1])**2)
		ans = max(ans, dis)

print('{:.6f}'.format(ans))
