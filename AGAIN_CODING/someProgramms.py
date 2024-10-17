def factorial(n):
    if n == 0:
        return 1
    else:
        return factorial(n-1)*n
n = int(input())
result = int(factorial(n+3)/factorial(n-1)*factorial(4))%1000000007
print(result)
