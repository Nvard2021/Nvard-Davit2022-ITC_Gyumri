rown = 8
dp = []
for i in range(rown):
    cur =  []
    for j in range(i+1):
        cur.append(0)
    if i == 0:
        cur = [1]
    else:
         cur[0] = 1 
         cur[len(cur) -1] =1 
    dp.append(cur)
print(dp)

for i in range(2,rown):
    for j in range(1,i):
        dp[i][j] = dp[i-1][j-1] + dp[i-1][j]


print(dp)



# 1
# 11
# 121
# 1331

# dp[2][1] = dp[1][0] + dp[i][1];
# dp[i][j] = dp[i-1][j-1] + dp[i-1][j]
# 
