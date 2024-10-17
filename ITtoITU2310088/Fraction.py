import math
class Fraction:
    def __init__(self, numerator=0, denominator=1):
        self.numerator = numerator
        self.denominator = denominator
    def add(self, other):
            new_num = (self.numerator * other.denominator) + \
            (other.numerator * self.denominator)
            new_denom = self.denominator * other.denominator
            return Fraction(new_num, new_denom).simplify()
    def subtract(self, other):
            new_num = (self.numerator * other.denominator) - \
            (other.numerator * self.denominator)
            new_denom = self.denominator * other.denominator
            return Fraction(new_num, new_denom).simplify()
    def multiply(self, other):
            new_num = self.numerator * other.numerator
            new_denom = self.denominator * other.denominator
            return Fraction(new_num, new_denom).simplify()
    def divide(self, other):
            if other == 0: raise ZeroDivisionError("Cannot divide by zero")
            else:
                new_num = self.numerator * other.denominator
                new_denom = self.denominator * other.numerator
                return Fraction(new_num, new_denom).simplify()
    def simplify(self):
                gcd = math.gcd(self.numerator, self.denominator)
                return Fraction(self.numerator / gcd, self.denominator / gcd)
    def main():
                frac1 = Fraction(3,4)
                frac2 = Fraction(5,6)
                print(frac1.add(frac2)) # should output 7/8
                print(frac1.subtract(frac2)) # should output -1/8
                print(frac1.multiply(frac2)) # should output 15/24
                print(frac1.divide(frac2)) # should output 9/12
                print(frac1.simplify()) # should output 3/4
                print(frac2.simplify()) # should output 5/6
                