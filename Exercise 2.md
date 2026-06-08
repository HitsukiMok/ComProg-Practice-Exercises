# Practice Problem: Gacha Character Inventory System

**Instructions:** Open your IDE and test. Save the program file in a designated folder. Ensure your logic handles dynamic game data cleanly.

## I. Program Requirements

1. **Nested Structure:** Create a structure named `CombatStats` with the fields: `level`, `attack`, and `hp` (all integers).
2. **Main Structure:** Create a structure named `Character` with the fields:
	- `characterID` (integer)
	- `name` (string/character array)
	- `rarity` (integer, representing 1 to 5 stars)
	- `stats` (This must be a nested structure of type `CombatStats`)
3. **Array Structure:** Use an array of structures to hold up to 50 characters in the player's roster. Ask the user how many characters they currently have to initialize the starting database.
4. **Predefined Functions:** Use `srand(time(NULL))` and `rand()` from `stdlib.h` and `time.h` to simulate a character random drop feature. Use string manipulation functions if necessary.
5. **User-Defined Functions:** You must build outside of `main()`:
	- `void displayRoster(...)`: Prints all characters in a neat layout.
	- `int searchCharacter(...)`: Performs a linear search by `characterID`. Returns the array index if found, or `-1` if missing.
6. **Pointer Requirement:** `void levelUpCharacter(Character *c)`: Accepts a pointer to a single character. It must increase the character's `level` by 1, and directly scale up their `attack` and `hp` by a fixed amount in memory using the pointer arrow (`->`) operator.
7. **File Handling:** Save the current character roster to a file named `gacha_inventory.txt`.
8. Read and load character data back from `gacha_inventory.txt` into the program.
9. **Menu-Driven System:** Provide the user with the following looping menu options:

---

## GACHA INVENTORY MENU

```
===== GACHA INVENTORY MENU =====

1. Display Character Roster
2. Perform Random Gacha Summon (Add New)
3. Search Character by ID
4. Level Up a Character (Pointer Mod)
5. Save Roster to File
6. Load Roster from File
7. Exit
```

The program must continue looping until the user selects option 7.

---

## Sample Input and Output

### Initial Setup
```
Enter how many characters are in your initial roster: 2

Character 1 Details
ID: 1001
Name: Acheron
Rarity (Stars): 5
Level: 1
Base Attack: 150
Base HP: 600

Character 2 Details
ID: 1002
Name: March7th
Rarity (Stars): 4
Level: 1
Base Attack: 90
Base HP: 450
```

### Display Character Roster (Option 1)
```
===== GACHA INVENTORY MENU =====

1. Display Character Roster
2. Perform Random Gacha Summon (Add New)
3. Search Character by ID
4. Level Up a Character (Pointer Mod)
5. Save Roster to File
6. Load Roster from File
7. Exit

Enter Choice: 1

===== PLAYER ROSTER =====
[ID: 1001] Acheron (5-Star) | LVL: 1 | ATK: 150 | HP: 600
[ID: 1002] March7th (4-Star) | LVL: 1 | ATK: 90  | HP: 450
```

### Level Up Character (Option 4)
```
===== GACHA INVENTORY MENU =====

Enter Choice: 4
Enter Character ID to level up: 1001
Processing... passing character address to pointer function...
Success! Acheron leveled up! New Level: 2 | ATK: 175 | HP: 650
```

### Save Roster (Option 5)
```
===== GACHA INVENTORY MENU =====

Enter Choice: 5
System Message: Roster safely backed up to gacha_inventory.txt!
```

### Exit Program (Option 7)
```
===== GACHA INVENTORY MENU =====

Enter Choice: 7
Program terminated. Good luck with your next pulls!
```

---

## Key Features to Implement

- Nested structures (`CombatStats` inside `Character`)
- Array of structures for multiple records
- Random summon feature using `rand()`
- Pointer usage in `levelUpCharacter()`
- File I/O for save and load
- Menu-driven interface with continuous looping
- Search functionality by character ID
- Clean modular C code with user-defined functions
