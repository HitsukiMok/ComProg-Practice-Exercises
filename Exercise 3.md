# Practice Problem: K-Pop Entertainment Agency Tracker

**Instructions:** Open your IDE. Think before you type. Save the program file in a designated folder.

## I. Program Requirements

1. **Nested Structure:** Create a structure named `Skills` with the fields: `vocal` (integer), `dance` (integer), and `charisma` (integer).
2. **Main Structure:** Create a structure named `Trainee` with the fields:
	- `stageName` (string/character array)
	- `age` (integer)
	- `stats` (nested structure of type `Skills`)
	- `totalScore` (integer)
	- `grade` (character: 'A', 'B', 'C', or 'F')
3. **Array Handling:** Ask the user how many trainees are currently in the agency. Use an array of structures to store them.
4. **Predefined Functions:** You must include and use `strcmp()` for your searching logic.
5. **User-Defined Functions (No Pointers):**
	- `void displayTrainees(...)`: Prints the roster formatted cleanly.
	- `int searchTrainee(...)`: Accepts the array and a target string (the trainee's name). It loops through the array, using `strcmp()` to find a match. Returns the index if found, `-1` if not.
6. **User-Defined Function (Pointer Required):** `void runMonthlyEvaluation(Trainee *t)`: Accepts a pointer to a single `Trainee`.
7. It must calculate the sum of the nested `vocal`, `dance`, and `charisma` stats and store it in `t->totalScore`.
8. Using an `if/else` block inside the function, assign a `t->grade` based on the `totalScore` (e.g., 250+ is 'A', 200+ is 'B', etc.).
9. **File Handling:** Save records to `agency_records.txt` and load them back into the system.
10. **Menu-Driven System:** Provide the user with the following looping menu:

---

## K-POP AGENCY MENU

```
===== K-POP AGENCY MENU =====

1. Display All Trainees
2. Search Trainee by Stage Name (String Search)
3. Run Monthly Evaluation (Pointer Update)
4. Save Records to File
5. Load Records from File
6. Exit
```

The program must continue looping until the user selects option 6.

---

## Sample Input and Output

### Initial Setup
```
Enter number of initial trainees: 2

Trainee 1 Details
Stage Name: Minji
Age: 19
Vocal Skill (0-100): 85
Dance Skill (0-100): 90
Charisma Skill (0-100): 95

Trainee 2 Details
Stage Name: Hanni
Age: 19
Vocal Skill (0-100): 92
Dance Skill (0-100): 88
Charisma Skill (0-100): 90
```

*Note: `totalScore` initializes at 0, grade initializes at 'U' for Unevaluated.*

### Display All Trainees (Option 1)
```
===== K-POP AGENCY MENU =====

1. Display All Trainees
2. Search Trainee by Stage Name (String Search)
3. Run Monthly Evaluation (Pointer Update)
4. Save Records to File
5. Load Records from File
6. Exit

Enter Choice: 1

===== TRAINEE ROSTER =====
Name: Minji | Age: 19 | Vocal: 85 | Dance: 90 | Charisma: 95 | Total: 0 | Grade: U
Name: Hanni | Age: 19 | Vocal: 92 | Dance: 88 | Charisma: 90 | Total: 0 | Grade: U
```

### Run Monthly Evaluation (Option 3)
```
===== K-POP AGENCY MENU =====

Enter Choice: 3

Enter Stage Name to Evaluate: Minji
System Message: Found Minji. Passing record to evaluation committee (Pointer)...
Evaluation Complete! Minji scored 270 and received Grade: A!
```

### Search Trainee (Option 2)
```
===== K-POP AGENCY MENU =====

Enter Choice: 2

Enter Stage Name to Search: Minji
Trainee Found!
Name: Minji | Total Score: 270 | Current Grade: A
```

### Save Records (Option 4)
```
===== K-POP AGENCY MENU =====

Enter Choice: 4
System Message: Agency records saved to agency_records.txt
```

### Exit Program (Option 6)
```
===== K-POP AGENCY MENU =====

Enter Choice: 6
Program terminated.
```

---

## Key Features to Implement

- Nested structures (`Skills` inside `Trainee`)
- Array of structures for multiple trainees
- String search using `strcmp()`
- Pointer usage in `runMonthlyEvaluation()`
- File I/O for save and load
- Menu-driven interface with continuous looping
- Clean modular C code with user-defined functions
![alt text](image.png)