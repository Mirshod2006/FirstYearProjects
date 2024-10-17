#Object Oriented Programming

# def hello():
#     print("hello")
# x = 1.34
# print(type(hello))
# x = " world"
# y = "hello"
# z = 1
# print((y+x).upper())
# class Dog:
#     def __init__(self,name,age):
#         self.name = name
#         self.age = age

#     def get_name(self):
#         return self.name
    
#     def set_name(self,name):
#         self.name = name

#     def get_age(self):
#         return self.age
    
#     def set_age(self,age):
#         self.age = age

# d = Dog("Tim",35)
# d.set_name("Pianist")
# d.set_age(23)
# print(d.get_name())
# print(d.get_age())

class Student:
    def __init__(self,name,age,grade):
        self.name = name
        self.age = age 
        self.garde = grade # 0 - 100

    def get_grade(self):
        return self.garde
    
class Course:
    def __init__(self,name,max_students):
        self.name = name
        self.max_students = max_students
        self.students = []
        self.is_active = False

    def add_students(self,student):
        if len(self.students) < self.max_students:
            self.students.append(student)
            return True
        return False
    def get_average_grade(self):
        sum = 0
        for student in self.students:
            sum += student.get_grade()
        return sum / len(self.students)

s1 = Student("Tim",17,95)
s2 = Student("Bill",19,75)
s3 = Student("Jill",19,65)

course = Course("Calculus",2)
course.add_students(s2)
course.add_students(s1)
print(course.get_average_grade())