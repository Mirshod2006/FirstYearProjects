def deep_reverse(L):
    L.reverse()
    for sublist in L:
        if isinstance(sublist, list):
            deep_reverse(sublist)
    return L

       
L = [[1,2,3],[3,4],[5,6]]
print(deep_reverse(L))