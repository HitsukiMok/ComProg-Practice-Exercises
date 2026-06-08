# Comprehensive Practice Problem: Enterprise HR Database System

**Instructions:** Save the program file in a designated folder. Write clean, modular C code. This exercise evaluates your mastery of nested structures, array manipulation, pointers, and file I/O operations.

## I. Program Requirements

1. **Nested Structure:** Create a structure named `Date` with integer fields for `day`, `month`, and `year`.
2. **Main Structure:** Create a structure named `Employee` with the following fields:
	- `employeeID` (string/character array)
	- `name` (string/character array)
	- `department` (string/character array)
	- `dateOfHire` (nested structure of type `Date`)
	- `salary` (float)
3. **Array Initialization:** Prompt the user to enter the details for three (3) employees initially and store them in an array of structures.
4. **Display Function:** Write a function outside `main()` to display all employee records in a professional format.
5. **Pointer-Based Update Function:** Write a function to update the details of a specific employee based on their `employeeID`. This mirrors last year's requirement to update book details based on ISBN. This function must accept a pointer to the matched `Employee` struct and prompt the user for the updated details to modify the record directly in memory.
6. **Algorithmic Search Function:** Write a function to identify and display the most senior employee based on their `dateOfHire`. This requires comparing the year, then the month, then the day. This scales up the logic from last year's task of identifying the oldest book according to the year of publication.
7. **File Handling:** Write the details of all employees in the array to a file named `employees.txt`.
8. Read and print the contents back from `employees.txt` to verify data persistence.

---

## Sample Input and Output

### Initial Employee Entry
```
Enter details for Employee 1

Employee ID: EMP-001
Name: Alice_Smith
Department: Accounting
Date of Hire (DD MM YYYY): 14 05 2018
Salary: 75000.00

Enter details for Employee 2

Employee ID: EMP-002
Name: Bob_Jones
Department: IT_Support
Date of Hire (DD MM YYYY): 01 11 2021
Salary: 62000.50

Enter details for Employee 3

Employee ID: EMP-003
Name: Clara_Dane
Department: Operations
Date of Hire (DD MM YYYY): 22 03 2015
Salary: 81000.00
```

### Display All Employees
```
===== LIST OF EMPLOYEES =====

Employee 1
ID: EMP-001 | Name: Alice_Smith | Dept: Accounting | Hired: 14/5/2018 | Salary: 75000.00

Employee 2
ID: EMP-002 | Name: Bob_Jones | Dept: IT_Support | Hired: 1/11/2021 | Salary: 62000.50

Employee 3
ID: EMP-003 | Name: Clara_Dane | Dept: Operations | Hired: 22/3/2015 | Salary: 81000.00
```

### Update Employee Record
```
===== UPDATE EMPLOYEE RECORD =====

Enter Employee ID to update: EMP-002

Enter updated details for the employee:

Name: Bob_Jones
Department: IT_Manager
Date of Hire (DD MM YYYY): 01 11 2021
Salary: 95000.00

System Message: Employee details updated successfully.
```

### Most Senior Employee
```
===== MOST SENIOR EMPLOYEE =====

ID: EMP-003
Name: Clara_Dane
Department: Operations
Hire Date: 22/3/2015
Salary: 81000.00
```

### File Handling Export
```
===== FILE HANDLING EXPORT =====

System Message: Employee records saved to employees.txt

Printing enterprise database contents from file:

EMP-001 Alice_Smith Accounting 14/5/2018 75000.00

EMP-002 Bob_Jones IT_Manager 1/11/2021 95000.00

EMP-003 Clara_Dane Operations 22/3/2015 81000.00
```

---

## Key Features to Implement

- Nested structures (`Date` inside `Employee`)
- Array of structures for multiple employee records
- Pointer-based update function for direct record modification
- Senior employee search using date comparison logic
- File I/O for saving and loading records
- Clean modular C code with user-defined functions
