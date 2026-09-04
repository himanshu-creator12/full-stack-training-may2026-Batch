class Registration:

    # Constructor
    def __init__(self, name, password, user_id, email, login_id, login_password):

        # Public
        self.name = name
        self.email = email

        # Protected
        self._user_id = user_id

        # Private
        self.__password = password
        self.__login_id = login_id
        self.__login_password = login_password

    
    def get_password(self):
        return self.__password

    def set_password(self, password):
        self.__password = password

    # Login ID getter and setter
    def get_login_id(self):
        return self.__login_id

    def set_login_id(self, login_id):
        self.__login_id = login_id

    # Login Password getter and setter
    def get_login_password(self):
        return self.__login_password

    def set_login_password(self, login_password):
        self.__login_password = login_password


class User(Registration):

    # Display user
    def display_user(self):

        print("\n----- User Details -----")
        print("Name:", self.name)
        print("Email:", self.email)
        print("User ID:", self._user_id)

        print("Password:", self.get_password())
        print("Login ID:", self.get_login_id())
        print("Login Password:", self.get_login_password())

    # Update user
    def update_user(self):

        print("\n----- Update User -----")

        self.name = input("Enter new name: ")
        self.email = input("Enter new email: ")

        self.set_password(input("Enter new password: "))
        self.set_login_id(input("Enter new login ID: "))
        self.set_login_password(input("Enter new login password: "))

        print("\nUser details updated successfully!")

    # Delete user
    def delete_user(self):

        print("\nUser deleted successfully!")

        self.name = None
        self.email = None
        self._user_id = None

        self.set_password(None)
        self.set_login_id(None)
        self.set_login_password(None)


# ---------------- MAIN PROGRAM ----------------

print("----- User Registration -----")

name = input("Enter Name: ")
password = input("Enter Password: ")
user_id = input("Enter User ID: ")
email = input("Enter Email: ")
login_id = input("Enter Login ID: ")
login_password = input("Enter Login Password: ")

# Object creation
user = User(
    name,
    password,
    user_id,
    email,
    login_id,
    login_password
)


# ---------------- MENU ----------------

while True:

    print("\n========== MENU ==========")
    print("1. Display User")
    print("2. Update User")
    print("3. Delete User")
    print("4. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":

        user.display_user()

    elif choice == "2":

        user.update_user()

    elif choice == "3":

        user.delete_user()

    elif choice == "4":

        print("\nThank you!")