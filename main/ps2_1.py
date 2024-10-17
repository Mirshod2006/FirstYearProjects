def calculate(listA,listB):
    m = 0
    for i in range( 0 , len(listA)):
        m += listA[i] * listB[i]
    return m
 
array1 = [ 1,2,3]
array2 =[ 4,5,6]
print(calculate(array1,array2))
         