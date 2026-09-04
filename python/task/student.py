students = []

for i in range(2):
    print("\nEnter details of Student", i + 1)

    id = input("Enter ID: ")
    name = input("Enter Name: ")
    age = input("Enter Age: ")
    email = input("Enter Email: ")
    address = input("Enter Address: ")
    country = input("Enter Country: ")

    student = f"""Student {i + 1}
ID: {id}
Name: {name}
Age: {age}
Email: {email}
Address: {address}
Country: {country}
"""

    students.append(student)


with open("students.txt", "w") as file:
    for student in students:
        file.write(student)
        file.write("\n")

print("\nStudent data saved successfully in students.txt")