from cs50 import get_string, SQL

db = SQL("sqlite:///students.db")

# Get name of new person
name = get_string("Name: ")

# Add new person
# Table called people, column called name
student_id = db.execute("INSERT INTO people (name) VALUES (?)", name)

# Prompt for courses to enroll in
while True:
    code = get_string("Course Code: ")

    # If no input, then stop adding courses
    if not code:
        break

    # Query for course id
    # table is courses, columns id, code, title
    results = db.execute("SELECT id FROM courses WHERE code = ?", code)

    # Check to make sure course exists
    if len(results) == 0:
        print(f"No course with code {code}.")
        continue

    # Enroll student
    db.execute("INSERT INTO students (person_id, course_id) VALUES (?, ?)", student_id, course_id)
    print(f"Added {name} to {code}")
    print("Added " + name + " to " + code)