def f(i):
    return  i + 2
def g(i):
    return i > 5
def applyF_filterG(L, f, g):
    L[:] = [i for i in L if g(f(i))]
    return max(L) if L else -1
    
L = [0,-10,5,6,-4]
print(applyF_filterG(L,f,g))
print(L)
