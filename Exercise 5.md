# Advanced Practice Problem: University Registrar & Dean's List System

**Instructions:** Save the program file in a designated folder. Write clean, modular C code. Pay strict attention to the inverted grading logic.

## I. Program Requirements

1. **Child Structure:** Create a structure named `Course` with the following fields:
	- `courseCode` (string/character array)
	- `units` (integer)
	- `grade` (float - using the 1.00 to 5.00 scale)
2. **Parent Structure:** Create a structure named `Student` with the following fields:
	- `studentID` (string/character array)
	- `name` (string/character array)
	- `enrolledCourses` (an array of 3 `Course` structures)
	- `gwa` (float - General Weighted Average)
3. **Array Initialization:** Prompt the user to enter the details for three (3) BSCS students. For each student, use a nested loop to prompt for their 3 courses.
4. **Pointer-Based Calculation:** Write a function named `calculateGWA(Student *s)`. It must accept a pointer to a single student.
5. It must loop through the student's `enrolledCourses` array.
6. It must calculate the General Weighted Average: **Sum of (grade * units) / Total units**.
7. It must store this result directly into `s->gwa` using the pointer.
8. **Sorting Algorithm (Inverted):** Write a function named `rankStudents(Student arr[], int size)`. This function must sort the array of students in **ascending order** based on their `gwa` (the lowest numerical value, meaning the highest grade, becomes index 0).
9. **File Handling (The President's/Dean's List):** Write the sorted array to a file named `deans_list.txt`. The file output must only include students who have a GWA of **1.50 or better**.
10. **Menu-Driven System:** Provide the user with the following looping menu:

---

## REGISTRAR SYSTEM MENU

```
===== REGISTRAR SYSTEM MENU =====

1. Display All Students & Courses
2. Calculate GWAs for All Students
3. Rank Students by GWA (Sort)
4. Export Dean's List to File
5. Exit
```

The program must continue looping until the user selects option 5.

---

## Sample Input and Output

### Initial Setup
```
Enter details for Student 1:
Student ID: 2023-0001-MN-0
Name: Mark_Lee
Course 1 Code: COMP_003
Course 1 Units: 3
Course 1 Grade (1.00 - 5.00): 1.25
Course 2 Code: COSC_001
Course 2 Units: 3
Course 2 Grade: 1.50
Course 3 Code: GEED_10013
Course 3 Units: 3
Course 3 Grade: 1.00

Enter details for Student 2:
Student ID: 2023-0002-MN-0
Name: Sarah_Connor
Course 1 Code: COMP_003
Course 1 Units: 3
Course 1 Grade: 2.50
Course 2 Code: COSC_001
Course 2 Units: 3
Course 2 Grade: 2.75
Course 3 Code: GEED_10013
Course 3 Units: 3
Course 3 Grade: 2.00
```

*Assume Student 3 is inputted with straight 1.00 grades across all classes.*

### Calculate GWAs (Option 2)
```
===== REGISTRAR SYSTEM MENU =====

1. Display All Students & Courses
2. Calculate GWAs for All Students
3. Rank Students by GWA (Sort)
4. Export Dean's List to File
5. Exit

Enter Choice: 2
System Message: Iterating through memory... GWAs calculated successfully via pointers!
```

### Rank Students (Option 3)
```
Enter Choice: 3
System Message: Roster sorted by GWA in ascending order (Highest Grades First).
```

### Display All Students & Courses (Option 1)
```
Enter Choice: 1

===== OFFICIAL STUDENT ROSTER =====
Rank 1: Student 3 | ID: 2023-0003-MN-0 | GWA: 1.00

- COMP_003 (3 units): 1.00
- COSC_001 (3 units): 1.00
- GEED_10013 (3 units): 1.00

Rank 2: Mark_Lee | ID: 2023-0001-MN-0 | GWA: 1.25
- COMP_003 (3 units): 1.25
- COSC_001 (3 units): 1.50
- GEED_10013 (3 units): 1.00

Rank 3: Sarah_Connor | ID: 2023-0002-MN-0 | GWA: 2.41
- COMP_003 (3 units): 2.50
- COSC_001 (3 units): 2.75
- GEED_10013 (3 units): 2.00
```

### Export Dean's List (Option 4)
```
Enter Choice: 4
System Message: Scanning for GWAs 1.50 or better...
System Message: deans_list.txt generated successfully. (Sarah_Connor excluded)
```

---

## Key Features to Implement

- Nested structures (`Course` inside `Student`)
- Array of structures for multiple students and courses
- Pointer-based GWA calculation using `calculateGWA()`
- Ascending sort by GWA for inverted grading logic
- Dean's List export with GWA filtering
- Menu-driven interface with continuous looping
- Clean modular C code with user-defined functions
