class Student:

   
    def __init__(self, name, age, city):
        self.name = name
        self.age = age
        self.city = city

    # Function 1
    def display(self):
        print("Student Name:", self.name)
        print("Student Age:", self.age)
        print("Student City:", self.city)

    # Function 2
    def study(self):
        print(self.name, "is studying.")

    # Function 3
    def play(self):
        print(self.name, "is playing.")

    # Function 4
    def introduce(self):
        print("Hello, my name is", self.name)



student1 = Student("Himanshu", 20, "Bageshwar")


student1.display()
student1.study()
student1.play()
student1.introduce()