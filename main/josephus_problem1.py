n = int(input())

def josephus(n, k):
    circle = list(range(0, n ))
    index = 0

    while len(circle) > 1:
        index = (index + k - 1) % len(circle)
        removed = circle.pop(index)

    return circle[0]



k = 2
print(josephus(n, k))
