# def binomial_coefficient(n, k):
#     res = 1
#     if k > n - k:
#         k = n - k
#     for i in range(k):
#         res *= (n - i)
#         res //= (i + 1)
#     return res

# def pascals_triangle_layer_sum(n):
#     layer_sum = 0
#     for k in range(n+1):
#         layer_sum += binomial_coefficient(n, k)
#     return layer_sum % (10**9 + 7)
# def maxWater(capacityA, capacityB, M):
#     dp = [[0] * (M + 1) for _ in range(M + 1)]

#     for i in range(1, M + 1):
#         dp[i][i] = i
#         dp[i][0] = i

#     for i in range(1, M + 1):
#         for j in range(1, M + 1):
#             if i + j <= M:
#                 dp[i][j] = max(dp[i][j], dp[i][j - 1] + min(capacityA, capacityB))
#                 dp[i][j] = max(dp[i][j], dp[i - 1][j] + min(capacityA, capacityB))

#     return dp[M][M]

# capacityA = 25
# capacityB = 17
# M = 77

# print(maxWater(capacityA, capacityB, M))
a = int(input())
for i in range(a):
    c = int(input())
    b = bin(c).replace("0b","")
    print(b.count("1"))

