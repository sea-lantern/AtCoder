N, Y = map(int, input().split())
Y = int(Y/1000)
DP = [[0 for _ in range(Y+11)] for _ in range(2)]
DP[0][0] = -1

for _ in range(N-1):
    for i in range(Y):
        if DP[0][i][0]+DP[0][i][1]+DP[0][i][2] > 0:
            for j in range(3):
                DP[1][i+1][j] = DP[0][i][j]
                DP[1][i+5][j] = DP[0][i][j]
                DP[1][i+10][j] = DP[0][i][j]
            DP[1][i+1][0] += 1
            DP[1][i+5][1] += 1
            DP[1][i+10][2] += 1
    for i in range(Y+1):
        for j in range(3):
            DP[0][i][j] = DP[1][i][j]

if DP[0][Y][0]+DP[0][Y][1]+DP[0][Y][2] > 0:
    print(DP[0][Y][2], DP[0][Y][1], DP[0][Y][0])
else:
    print("-1 -1 -1")