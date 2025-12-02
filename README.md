# Nimbus_Project_Kshitij_mishra_Project_93

# Password Strength Checker – C Project

A modular C program that evaluates the strength of a user-entered password.
The program checks if the password contains uppercase letters, lowercase letters, numbers, special symbols, and meets the minimum length requirement.
If the password is weak, the program shows suggestions for improvement and logs the result to a file.

## **Project Objective**

The main objective of this project is to **develop a password validation system in C that:

 Accepts a password from the user
 Checks its strength based on multiple security criteria
 Displays appropriate feedback and suggestions
 Stores the result (STRONG/WEAK) in a log file
 Demonstrates modular programming using multiple source (.c) and header (.h) files

This project helps students understand:
 Modular code structure
 File handling in C
 String processing
 Condition-based validation
 Working with multiple ".c" files in one program
 
## Development Steps

### **Step 1: Input Module**

* Created "input_handler.c" & "input_handler.h"
* Implemented "readPassword()"
* Ensures user input is safely collected using dynamic memory and "fgets()"

---

### **Step 2: Password Checking Module**

* Created `password_checker.c` & `password_checker.h`
* Implemented `checkPassword()`
* Checks for:

  * Minimum length ≥ 8
  * At least one uppercase
  * At least one lowercase
  * At least one digit
  * At least one special character
* Generates suggestions for missing criteria

### **Step 3: File Logging Module**

* Created `file_logger.c` & `file_logger.h`
* Implemented `saveToFile()`
* Stores password and strength status in `password_log.txt`

---

### **Step 4: Main Program**

* Created `main.c`
* Integrates all modules
* Displays final output to the user
* Frees allocated memory

### **Step 5: Final Compilation**
Compiled all four `.c` files using GCC:
gcc main.c input_handler.c password_checker.c file_logger.c -o password_checker


## **Usage Instructions**

### **1. Compilation**

Open terminal inside project folder and run:

gcc main.c input_handler.c password_checker.c file_logger.c -o password_checker

### **2. Run the Program**

password_checker.exe

## **Sample Output Screenshots**
<img width="1595" height="887" alt="image" src="https://github.com/user-attachments/assets/385a6ece-b26a-46b0-87ce-96757c973c70" />


### **Strong Password Example**

```
Enter password: Hello@123
The password is STRONG
```

---

### **Weak Password Example**

```
Enter password: hello
The password is WEAK

Suggestions:
- Add uppercase letters
- Add numbers
- Add special characters
- Increase length to at least 8 characters
```

---

## **Group Member Contribution**

| Member   | Responsibility             | Files                                   |
| -------- | -------------------------- | --------------------------------------- |
| Deepak Sharma | Input Handling             | input_handler.c / input_handler.h       |
| Kshitij Mishra | Password Checking Logic    | password_checker.c / password_checker.h |
| Pravar Singh | File Logging               | file_logger.c / file_logger.h           |
| Yash | Main Program & Integration | main.c                                  |

---

##  **Conclusion**

This project successfully demonstrates the concepts of:

* Modular programming
* String manipulation
* Condition checking
* File I/O operations
* Multi-file compilation
