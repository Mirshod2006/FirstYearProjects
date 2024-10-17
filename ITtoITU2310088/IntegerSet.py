class IntegerSet:
    def _init_(self,list):
        self.set = list
    def union(self,other):
        return set(self.set + other)
    def intersection(self,other):
        return set([i for i in self.set if i in other])
    def difference(self,other):
        return [i for i in self.set if not (i in other)]
    def IsMember(self,other):
        return other in self.set