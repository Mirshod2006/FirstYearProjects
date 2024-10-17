L = [ 1 ,3, [[8],5,'a'],4, 'puppy']
def flatten_list(L):
    flattened = []
    for item in L:
        if isinstance(item, list):
            flattened.extend(flatten_list(item))
        else:
            flattened.append(item)
    return flattened
print(flatten_list(L))
