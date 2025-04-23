#customer
#employee
#admin

from abc import ABC 

class User(ABC):
    def __init__(self,name, phone, email, address):
        self.name=name
        self.phone =phone
        self.email = email
        self.address = address
class Customer(User):
    def __init__(self, name, phone, email, address):
        super().__init__(name, phone, email, address)
        self.orders = []
        self.cart = None

    defv

class Employee(User):
    def __init__(self, name, phone, email, address, age, designation, salary):
        super().__init__(name, phone, email, address)
        self.age = age
        self.designation = designation
        self.salary = salary

#emp= Employee("rahim" , "rahim@gmail.com" , 1234563, "dhaka", 23, "chef", 12000)
#print(emp.name)

class Admin(User):
    def __init__(self, name, email, phone, address):
        super().__init__(name, email, phone, address)
        self.employees = []

    def add_employee(self, restaurant, employee):
        restaurant.add_employee(employee)

    def view_employee(self, restaurant):
        restaurant.view_employee()

    def add_new_item(self, restaurant, item):
        restaurant.menu.add_menuitem(item) 

    def delete_item(self, restaurant, item):
        restaurant.menu.remove_item(item) 
class Restaurant:
    def __init__(self, name):
        self.name = name
        self.employees = []
        self.menu = food_item()
    def add_employee(self, employee):
        self.employees.append(employee)

    def view_employee(self):
        print("Employee List !!")
        for emp in self.employees:
            print(emp.name, emp.email, emp.phone, emp.address)

class menu:
    def __init__(self):
        self.items = []

    def add_menuitem(self, item):
        self.items.append(item)   
    
    def find_item(self, item_name):
        for item in self.items:
            if item.name.lower() == item_name.lower():
                return item
        return None
    def remove_item(self, item_name):
        item = self.find_item(item_name)
        if item:
            self.items.remove(item)
            print("item deleted")
        else:
            print("item not found")
    def show_menu(self):
        print("****Menu****")
        print("Name\tprice\tQuantity")
        for item in self.items:
            print(f"{item.name}\t{item.price}\t{item.quantity}") 

class food_item:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity

mn =menu()

ad.view_employee()