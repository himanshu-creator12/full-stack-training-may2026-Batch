class Student:

    def __init__(self, name, age, grade):
        self.name = name
        self.age = age
        self.grade = grade

    def display_info(self):
        print("Name:", self.name)
        print("Age:", self.age)
        print("Grade:", self.grade)
        print("--------------------")


student1 = Student("Himanshu", 21, "A")
student2 = Student("Rahul", 20, "B")
student3 = Student("Priya", 22, "A+")


student1.display_information()
student2.display_information()
student3.display_information()