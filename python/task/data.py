class Student:

    def __init__(self, name, age, city):
        # Public
        self.name = name

        # Protected
        self._age = age

        # Private
        self.__city = city

    def display(self):
        print("Name:", self.name)       # Public
        print("Age:", self._age)        # Protected
        print("City:", self.__city)     # Private


# Object
student1 = Student("Himanshu", 21, "bageshwar")

print(student1.name)

print(student1._age)

student1.display()