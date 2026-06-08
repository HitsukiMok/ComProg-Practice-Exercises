# Comprehensive Practice Problem: IT Asset Management System

**Instructions:** Open your IDE and test. Save the program file in a designated folder. Write clean, modular C code.

## I. Program Requirements

1. Create a structure named `Date` with the fields: `day`, `month`, and `year` (all integers).
2. Create a structure named `Asset` with the following fields:
   - `assetCode` (integer)
   - `assetName` (string/character array)
   - `purchaseDate` (This must be a nested structure of type `Date`)
   - `value` (float)
3. Ask the user how many asset records will be entered initially.
4. Use an array of structures to store the asset records.
5. Create a user-defined function to display all asset records.
6. Create a user-defined function to search for an asset by its `assetCode`.
7. **Pointer Requirement:** Write a user-defined function named `depreciateAsset` that accepts a pointer to a specific `Asset` structure and a percentage. It must modify the `value` of the asset directly in memory using the pointer.
8. Save all asset records to a file named `assets.txt`.
9. Read and load records from `assets.txt`.
10. Create a menu-driven program with the following options:

---

## IT ASSET INVENTORY MENU

```
===== IT ASSET INVENTORY MENU =====

1. Display All Assets
2. Add New Asset
3. Search Asset by Code
4. Depreciate Asset Value
5. Save Records to File
6. Load Records from File
7. Exit
```

The program must run continuously until the user selects option 7.

---

## Sample Input and Output

### Initial Setup
```
Enter how many assets will be entered: 2

Enter details for Asset 1
Asset Code: 101
Asset Name: Laptop
Purchase Date (DD MM YYYY): 15 08 2023
Value: 1200.50

Enter details for Asset 2
Asset Code: 102
Asset Name: Server
Purchase Date (DD MM YYYY): 01 12 2022
Value: 5500.00
```

### Display All Assets (Option 1)
```
===== IT ASSET INVENTORY MENU =====

1. Display All Assets
2. Add New Asset
3. Search Asset by Code
4. Depreciate Asset Value
5. Save Records to File
6. Load Records from File
7. Exit

Enter Choice: 1

===== ASSET RECORDS =====

Asset Code: 101
Name: Laptop
Purchased: 15/8/2023
Value: 1200.50

Asset Code: 102
Name: Server
Purchased: 1/12/2022
Value: 5500.00
```

### Depreciate Asset (Option 4)
```
===== IT ASSET INVENTORY MENU =====

Enter Choice: 4

Enter Asset Code to Depreciate: 101
Asset Found. Current Value: 1200.50
Enter depreciation percentage (e.g., 10 for 10%): 10

System Message: Asset value updated successfully via pointer!
```

### Search Asset (Option 3)
```
===== IT ASSET INVENTORY MENU =====

Enter Choice: 3

Enter Asset Code to Search: 101
Asset Found

Asset Code: 101
Name: Laptop
Purchased: 15/8/2023
Value: 1080.45
```

### Save Records (Option 5)
```
===== IT ASSET INVENTORY MENU =====

Enter Choice: 5

System Message: Records saved successfully to assets.txt
```

### Exit Program (Option 7)
```
===== IT ASSET INVENTORY MENU =====

Enter Choice: 7

System Message: Exiting program...
```

---

## Key Features to Implement

- Nested structures (`Date` inside `Asset`)
- Array of structures for multiple records
- **Pointer usage** in `depreciateAsset()` function
- File I/O (Save and Load)
- Menu-driven interface with continuous loop
- Search functionality
- User-defined functions (modular code)
- Proper input validation and formatting
