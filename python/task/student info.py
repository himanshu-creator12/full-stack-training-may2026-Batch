import json
from datetime import datetime

for i in range(5):

    try:

        print("\nPlease enter the details of student", i + 1)

        id = input("Enter ID: ")
        name = input("Enter Name: ")
        age = input("Enter Age: ")
        email = input("Enter Email: ")
        address = input("Enter Address: ")
        country = input("Enter Country: ")

        if id == "":
            raise Exception("ID cannot be empty")

        if name == "":
            raise Exception("Name cannot be empty")

        if age == "":
            raise Exception("Age cannot be empty")

        if email == "":
            raise Exception("Email cannot be empty")

        if address == "":
            raise Exception("Address cannot be empty")

        if country == "":
            raise Exception("Country cannot be empty")

        age = int(age)

        # Get current date and time
        registration_time = datetime.now().strftime("%Y-%m-%d %H:%M:%S")

        student = {
            "id": id,
            "name": name,
            "age": age,
            "email": email,
            "address": address,
            "country": country,
            "registration_date_time": registration_time
        }

        # Read existing students
        try:
            with open("students.json", "r") as file:
                students = json.load(file)

        except FileNotFoundError:
            students = []

        # Add student
        students.append(student)

        # Save students in JSON file
        with open("students.json", "w") as file:
            json.dump(students, file, indent=4)

        print("Student registered successfully")

    except ValueError:
        print("Age should be a number")

    except Exception as e:
        print("Error:", e)