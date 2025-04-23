class StudentDatabase:
    student_list = []
    
    @classmethod
    def add_student(cls, student):
        cls.student_list.append(student)

    @classmethod
    def find_student_by_id(cls, student_id):
        for student in cls.student_list:
            if student._student_id == student_id:  # Changed to access _student_id directly
                return student
        return None

class Student:
    def __init__(self, student_id, name, department):
        self._student_id = student_id
        self._name = name
        self._department = department
        self._is_enrolled = False 
        
        StudentDatabase.add_student(self)
    
    def get_id(self):  
        return self._student_id

    def is_enrolled(self):
        return self._is_enrolled
    
    def enroll_student(self):
        if self._is_enrolled:
            print(f"{self._name} is already enrolled.")
            return False
        else:
            self._is_enrolled = True
            print(f"{self._name} is now enrolled!")
            return True
    
    def drop_student(self):
        if not self._is_enrolled:
            print(f"{self._name} isn't enrolled yet.")
            return False
        else:
            self._is_enrolled = False
            print(f"{self._name} has been dropped.")
            return True
        
    def view_student_info(self):
        print(f"Student ID: {self._student_id}")
        print(f"Name: {self._name}")
        print(f"Department: {self._department}")


def create_sample_students():
    Student("S001", "Rakib", "Computer Science")
    Student("S002", "Sakib", "Engineering")
    Student("S003", "Akib", "Mathematics")
    Student("S004", "Hakib", "Physics")


def show_all_students():
    if not StudentDatabase.student_list:
        print("\nNo students in the database yet!")
        return
    
    print("\n===== All Students =====")
    for student in StudentDatabase.student_list:
        student.view_student_info()


def enroll_a_student():
    student_id = input("\nEnter student ID to enroll: ")
    student = StudentDatabase.find_student_by_id(student_id)
    
    if student:
        student.enroll_student()
    else:
        print(f"Oops! No student with ID {student_id} exists. Check the ID and try again.")


def drop_a_student():
    student_id = input("\nEnter student ID to drop: ")
    student = StudentDatabase.find_student_by_id(student_id)
    
    if student:
        student.drop_student()
    else:
        print(f"Can't find any student with ID {student_id}. Double-check maybe?")

def display_menu():
    print("1. Show me all the students")
    print("2. Enroll a student")
    print("3. Drop a student")
    print("4. Exit")

def main():
    create_sample_students()
    
    while True:
        display_menu()
        
        try:
            choice = int(input("\nYour choice (1-4): "))
        except ValueError:
            print("\nOops! That's not a number. Please enter a number between 1 and 4.")
            continue
        
        if choice == 1:
            show_all_students()
        elif choice == 2:
            enroll_a_student()
        elif choice == 3:
            drop_a_student()
        elif choice == 4:
            print("\n Goodbye!")
            break
        else:
            print("\n Invalid choice! Please enter a number between 1 and 4.")

if __name__ == "__main__":
    main()