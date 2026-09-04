# Hotel Management System


class Menu:
    def _init_(self, item_name, price):
        self.item_name = item_name
        self.price = price

    def show_menu(self):
        print("Item Name:", self.item_name)
        print("Price:", self.price)


class TableBooking:
    def _init_(self, table_no, customer_name, guests):
        self.table_no = table_no
        self.customer_name = customer_name
        self.guests = guests

    def book_table(self):
        print("Table booked successfully")

    def show_booking(self):
        print("Customer Name:", self.customer_name)
        print("Table Number:", self.table_no)
        print("Number of Guests:", self.guests)


class Order:
    def _init_(self, customer_name, item, quantity, price):
        self.customer_name = customer_name
        self.item = item
        self.quantity = quantity
        self.price = price

    def place_order(self):
        print("Order placed successfully")

    def show_order(self):
        total = self.quantity * self.price

        print("Customer Name:", self.customer_name)
        print("Food Item:", self.item)
        print("Quantity:", self.quantity)
        print("Price:", self.price)
        print("Total Amount:", total)


class Payment:
    def _init_(self, customer_name, amount, payment_method):
        self.customer_name = customer_name
        self.amount = amount
        self.payment_method = payment_method

    def make_payment(self):
        print("Payment successful")

    def show_bill(self):
        print("Customer Name:", self.customer_name)
        print("Amount:", self.amount)
        print("Payment Method:", self.payment_method)


class Feedback:
    def _init_(self, customer_name, message, rating):
        self.customer_name = customer_name
        self.message = message
        self.rating = rating

    def give_feedback(self):
        print("Feedback submitted successfully")

    def show_feedback(self):
        print("Customer Name:", self.customer_name)
        print("Feedback:", self.message)
        print("Rating:", self.rating)


class ScheduleBooking:
    def _init_(self, customer_name, date, time):
        self.customer_name = customer_name
        self.date = date
        self.time = time

    def schedule_booking(self):
        print("Booking scheduled successfully")

    def show_schedule(self):
        print("Customer Name:", self.customer_name)
        print("Date:", self.date)
        print("Time:", self.time)


# Main Menu

while True:

    print("\n===== HOTEL MANAGEMENT SYSTEM =====")
    print("1. Menu")
    print("2. Table Booking")
    print("3. Order")
    print("4. Payment / Billing")
    print("5. Feedback")
    print("6. Schedule Booking")
    print("7. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":

        item = input("Enter food item: ")
        price = float(input("Enter price: "))

        obj = Menu(item, price)
        obj.show_menu()

    elif choice == "2":

        table = int(input("Enter table number: "))
        name = input("Enter customer name: ")
        guests = int(input("Enter number of guests: "))

        obj = TableBooking(table, name, guests)
        obj.book_table()
        obj.show_booking()

    elif choice == "3":

        name = input("Enter customer name: ")
        item = input("Enter food item: ")
        quantity = int(input("Enter quantity: "))
        price = float(input("Enter price: "))

        obj = Order(name, item, quantity, price)
        obj.place_order()
        obj.show_order()

    elif choice == "4":

        name = input("Enter customer name: ")
        amount = float(input("Enter amount: "))
        method = input("Enter payment method: ")

        obj = Payment(name, amount, method)
        obj.make_payment()
        obj.show_bill()

    elif choice == "5":

        name = input("Enter customer name: ")
        message = input("Enter your feedback: ")
        rating = int(input("Enter rating out of 5: "))

        obj = Feedback(name, message, rating)
        obj.give_feedback()
        obj.show_feedback()

    elif choice == "6":

        name = input("Enter customer name: ")
        date = input("Enter booking date: ")
        time = input("Enter booking time: ")

        obj = ScheduleBooking(name, date, time)
        obj.schedule_booking()
        obj.show_schedule()

    elif choice == "7":

        print("Thank you for using Hotel Management System")
        break

    else:
        print("Invalid choice")