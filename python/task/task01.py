import getpass


class Registration:

    def __init__(self, name, password, user_id, email, login_id, login_password):
        self.name = name
        self.password = password
        self.user_id = user_id
        self.email = email
        self.login_id = login_id
        self.login_password = login_password


class User(Registration):

    def display(self):
        print("\n--- User Details ---")
        print("Name:", self.name)
        print("Password:", "*" * len(self.password))
        print("User ID:", self.user_id)
        print("Email:", self.email)
        print("Login ID:", self.login_id)
        print("Login Password:", "*" * len(self.login_password))

    def update(self):
        self.name = input("New Name: ")
        self.email = input("New Email: ")
        self.login_id = input("New Login ID: ")
        self.login_password = getpass.getpass("New Login Password: ")

        print("Updated successfully!")

    def delete(self):
        self.name = None
        self.password = None
        self.user_id = None
        self.email = None
        self.login_id = None
        self.login_password = None

        print("User deleted!")


# Main

name = input("Name: ")
password = getpass.getpass("Password: ")
user_id = input("User ID: ")
email = input("Email: ")
login_id = input("Login ID: ")
login_password = getpass.getpass("Login Password: ")

user = User(
    name,
    password,
    user_id,
    email,
    login_id,
    login_password
)

user.display()

user.update()

user.display()

user.delete()
