import json


class Table:

    # Constructor
    def __init__(self, table_id, table_menu, table_time, table_duration):
        self.table_id = table_id
        self.table_menu = table_menu
        self.table_time = table_time
        self.table_duration = table_duration

    # Table Booking
    def table_book(self):

        try:
            with open("table.json", "r") as file:
                data = json.load(file)

        except FileNotFoundError:
            data = []

        data.append({
            "table_id": self.table_id,
            "table_menu": self.table_menu,
            "table_time": self.table_time,
            "table_duration": self.table_duration
        })

        with open("table.json", "w") as file:
            json.dump(data, file, indent=4)

        print("Table booked successfully!")

    # Display Table
    def display_table(self):

        print("\n----- Table Details -----")
        print("Table ID:", self.table_id)
        print("Table Menu:", self.table_menu)
        print("Booking Time:", self.table_time)
        print("Duration:", self.table_duration)


table1 = Table(101, "Pizza", "7:00 PM", "2 Hours")

# Book table
table1.table_book()

# Display table
table1.display_table()